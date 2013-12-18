#ifndef _UNITTESTLIB_H_
#define _UNITTESTLIB_H_

class UnitTest
{
public:
	UnitTest();
	~UnitTest(); 

	virtual bool DoTest() = 0; 
};

class UnitTestGroup
{
public:

};

class UnitTester
{
public:

};

#endif