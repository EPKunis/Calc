#pragma once
#include "CalculatorProcessor.h"

 class IBaseCommand
{
public:
	virtual double CalculateCommands(int one, int two) = 0;
};


class AddCommand : public IBaseCommand
{
public:

	double CalculateCommands(int one, int two) {
		 one += two;
		return one;
	}
};


class SubCommand : public IBaseCommand
{
public:
	double CalculateCommands(int one, int two) {
		one -= two;
		return one;
	}
};


class MultCommand :public IBaseCommand
{
	double CalculateCommands(int one, int two) {
		one *= two;
		return one;
	}
};


class DivCommand :public IBaseCommand
{
	double CalculateCommands(int one, int two) {
		one /= two;
		return one;
	}
};


