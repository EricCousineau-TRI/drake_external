#include <iostream>

// Need to make it local for now.
#include "drake/solvers/mathematical_program.h"

using std::cout;
using std::endl;

using drake::solvers::MathematicalProgram;

int main() {
  MathematicalProgram prog;
  auto x = prog.NewContinuousVariables<1>("x");
  prog.AddLinearConstraint(x(0) == 0);
  auto result = prog.Solve();

  if (result != drake::solvers::kSolutionFound) {
    throw std::runtime_error("Solver did not return solution.");
  }

  cout << "Trivial Solution: " << prog.GetSolution(x) << endl;

  return 0;
}
