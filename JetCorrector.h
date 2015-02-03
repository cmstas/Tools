#ifndef JETCORRECTOR_H
#define JETCORRECTOR_H
#include <vector>
#include <string>
#include "TString.h"

class FactorizedJetCorrector;
FactorizedJetCorrector *makeJetCorrector (const std::vector<std::string> &vector_of_file_names);

#endif
