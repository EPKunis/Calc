#pragma once
#include "cMain.h"
#include <sstream>


class CalculatorProcessor
{

private:
	static CalculatorProcessor* _processor;

	int baseNum;
	std::vector<double> nums;
	std::vector<char> operations;

	//signs 
	char plus = '+';
	char minus = '-';
	char mult = '*';
	char div = '/';
	char sign;



	CalculatorProcessor() {}


public:
	static CalculatorProcessor* GetInstance() {
		if (_processor == nullptr)
		{
			_processor = new CalculatorProcessor;
		}
		return _processor;
	}
	//adds the operarion sign to vector
	void operation(char op) {
		operations.push_back(op);
	}

	//add number to vector
	void Numbers(double digits) {
		nums.push_back(digits);
	}

	double Calculate(std::string tmp) {
		std::stringstream equation(tmp);
		while (equation.good())
		{
			std::string temp;
			std::getline(equation, temp, sign);
			if (double num = std::stod(temp))
			{
				Numbers(num);
			}
			else
			{
				operation(sign);
			}
		}

		for (int i = 0; i < operations.size(); i++)
		{
			if (nums.size() > 1)
			{
				double first = nums[0];
				double second = nums[1];
				if (operations[i] == plus)
				{
					first += second;

					//deletes the first number
					nums.erase(nums.begin());
					//deletes the number after operation
					nums.erase(nums.begin());
				}

				if (operations[i] == minus)
				{
					first -= second;
					nums.erase(nums.begin());
					nums.erase(nums.begin());
				}

				if (operations[i] == mult)
				{
					first *= second;
					nums.erase(nums.begin());
					nums.erase(nums.begin());
				}

				if (operations[i] == div)
				{
					first /= second;
					nums.erase(nums.begin());
					nums.erase(nums.begin());
				}
			}
			operations.erase(operations.begin());

		}
		return nums[0];
	}



	void SetBaseNum(int _num) {
		baseNum = _num;
	};

	//doesnt let the copy op run
	CalculatorProcessor(CalculatorProcessor& other) = delete;
	void operator=(const CalculatorProcessor& other) = delete;

	//funtions for turning stuff to mods
	std::string GetDecimal() {
		return std::to_string(baseNum);
	};


	std::string GetHexadecimal() {
		std::string result = " ";
		int temp = baseNum;
		while (temp > 0)
		{
			int mod = temp % 16;
			if (mod < 10)
			{
				result += std::to_string(mod);
			}
			//do this for all of them
			else if (mod == 10)
			{
				result += "a";
			}
			else if (mod == 11)
			{
				result += "b";
			}
			else if (mod == 12)
			{
				result += "c";
			}
			else if (mod == 13)
			{
				result += "d";
			}
			else if (mod == 14)
			{
				result += "e";
			}
			else if (mod == 16)
			{
				result += "f";
			}
		}
		result += "0x";
		return result;
	};


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

	};

	std::string Add(double first, double second){
		std::string add = std::to_string(first + second);
		return add;
	}

	std::string Sub(double first, double second) {
		std::string sub = std::to_string(first - second);
		return sub;
	}

	std::string Mult(double first, double second) {
		std::string mult = std::to_string(first * second);
		return mult;
	}

	std::string Div(double first, double second) {
		std::string div = std::to_string(first / second);
		return div;
	}
};

CalculatorProcessor* CalculatorProcessor::_processor = nullptr;

