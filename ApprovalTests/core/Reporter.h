#ifndef APPROVALTESTS_CPP_REPORTER_H
#define APPROVALTESTS_CPP_REPORTER_H

#include <string>

namespace ApprovalTests {
// Reporters are called on test failure
class Reporter {
public:
    virtual ~Reporter() = default;
    virtual bool report(std::string received, std::string approved) const = 0;
};

//! Helper to prevent compilation failure when types are wrongly treated as Reporter:
template<typename T>
using IsNotDerivedFromReporter = typename std::enable_if<!std::is_base_of<Reporter, T>::value, int>::type;
}

#endif
