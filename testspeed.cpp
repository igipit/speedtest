// ConsoleApplication3.cpp: definisce il punto di ingresso dell'applicazione console.
//
#include <chrono>
#include <iostream>

//#include <chrono_io.h>

#define ASZ 10000
#define REP 100000

int main()
{

	float a[ASZ], b[ASZ];
	for (int i = 0; i != ASZ; ++i)
		a[i] = b[i] = 1.0;

	typedef std::chrono::high_resolution_clock Clock;

// add a comment
	float result = 0;
	auto start = Clock::now();
	for (int r = 0; r != REP; ++r)
	{
		float acc = 0;
		for (int j = 0; j != ASZ; ++j)
			acc += a[j] * b[j];
		result += acc;
	}
	auto end = Clock::now();
 std::chrono::duration<double> diff = end - start;
	

	
	//auto now_ms = std::chrono::time_point_cast<std::chrono::milliseconds>(t2 - t1);
	std::cout << "duration [us] : " << diff.count() << '\n'
		<< "result:  " << result << '\n';

}
