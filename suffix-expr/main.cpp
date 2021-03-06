// =====================================================================================
//
//       Filename:  main.cpp
//
//    Description:  entrance of the program
//
//        Version:  1.0
//        Created:  2014年03月25日 19时04分35秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  elloop (), elloop@foxmail.com
//        Company:  China
//
// =====================================================================================

#include <cstdlib>
#include <ctime>
#include <iostream>
#include <iomanip>
#include "suffix.h"
#define	pc(x) cout << "************************" << (x) << "*********************" << endl
#define	ps(x) cout << #x " = " << (x) << endl			//
#define	p(x)  cout << (x)			//
#define	cr    cout << endl			//
using namespace std;
int main ( int argc, char * argv[] ) {
	clock_t begin, end;
	begin = clock();
	pc ( argv[0] );
	/****************************** begin *************************************/

	SuffixTest suffix;
	suffix.test();

	/****************************** end *************************************/
	end = clock();
	cout << "time consumed: " << setprecision ( 4 ) << fixed << ( double ) ( end - begin ) / CLOCKS_PER_SEC << "s" << endl;
	return EXIT_SUCCESS;
}				// ----------  end of function main  ----------
