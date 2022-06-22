#pragma once


class IBaseCommand
{
	virtual double CalculateCommands() = 0;
};


class AddCommand : public IBaseCommand
{
private:
	double First;
	double Second;
public:
	AddCommand(double _first, double _second) {
		First = _first;
		Second = _second;
	}
	double CalculateCommands() {
		return First + Second;
	}
};


class SubCommand : public IBaseCommand
{
private:
	double First;
	double Second;
public:
	SubCommand(double _first, double _second) {
		First = _first;
		Second = _second;
	}
	double CalculateCommands() {
		return First - Second;
	}
};


class MultCommand :public IBaseCommand
{
private:
	double First;
	double Second;
public:
	MultCommand(double _first, double _second) {
		First = _first;
		Second = _second;
	}
	double CalculateCommands(int first, int second) {
		return First * Second;
	}
};


class DivCommand :public IBaseCommand
{
private:
	double First;
	double Second;
public:
	DivCommand(double _first, double _second) {
		First = _first;
		Second = _second;
	}
	double CalculateCommands() {
		return First / Second;
	}
};


