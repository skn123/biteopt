// Low-dimensional convergence test of the BiteOpt method.
//
// On each line:
// AI - average number of iterations taken in successful attempts.
// RI - std.dev of the number of iterations in successful attempts.
// At - average required number of attempts to converge.
// C - minimal objective function value detected in all successful attempts.
// RjC - average objective function value detected in all rejected attempts.
// PowerSum_4 - the name of the test function and dimensionality.

#include "tester.h"
#include "testfn.h"

int main()
{
	CTester Tester;

	Tester.init( 0.000001, 500, 2000, true );
	Tester.addCorpus( 2, TestCorpusAll, false, false );

	Tester.run();
}
