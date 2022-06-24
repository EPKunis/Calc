#pragma once
#include "cMain.h"
#include<vector>
#include "IBaseCommand.h"

class CalculatorProcessor
{


private:
	static CalculatorProcessor* _processor;
	int baseNum;

	CalculatorProcessor() {}

public:
	static CalculatorProcessor* GetInstance() {
		if (_processor == nullptr) {
			_processor = new CalculatorProcessor();
		}
		return _processor;
	}



	int SetBaseNumber(int _num) {

			baseNum = _num;
			return baseNum;
	}


	CalculatorProcessor(CalculatorProcessor& other) = delete;
	void operator=(const CalculatorProcessor& other) = delete;



	std::string GetDecimal() {
		return std::to_string(baseNum);
	}

	std::string GetHexadecimal() {
		std::string Hex = "";
		int number = baseNum;
		while (number > 0) {
			int mod = number % 16;
			if (mod < 10) {
				Hex = std::to_string(mod) + Hex;
			}
			else {
				if (mod == 10) {
					Hex += "A";
				}
				else if (mod == 11) {
					Hex += "B";
				}
				else if (mod == 12) {
					Hex += "C";
				}
				else if (mod == 13) {
					Hex += "D";
				}
				else if (mod == 14) {
					Hex += "E";
				}
				else if (mod == 15) {
					Hex += "F";
				}
			}
			number = number / 16;
		}
		Hex = "0x" + Hex;

		return Hex;
	}

	std::string GetBinary() {
		std::string results = " ";
		int temp = baseNum;
		for (int i = 0; i < 32; i++)
		{
			if (temp % 2 == 0)
			{
				results = "0" + results;
			}
			else {
				results = "1" + results;
			}

			temp = temp / 2;

		}

		return results;

	}

	double Add(int num) {

		baseNum += num;
		return baseNum;
	}

	double Subtract(int num) {
		baseNum -= num;
		return baseNum;
	}

	double Multiply(int num) {
		baseNum = baseNum * num;
		return baseNum;
	}

	double Divide(int num) {
		baseNum = baseNum / num;
		return baseNum;
	}

	double Modulus(int num) {
		baseNum = baseNum % num;
		return baseNum;
	}

};




