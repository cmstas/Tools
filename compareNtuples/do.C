{
  gROOT->ProcessLine(".L compareNtuples.C+");
  gROOT->ProcessLine("compareNtuples( \
    \"/home/users/cgeorge/CMS3/CMSSW_7_4_1_patch1_oldTag/src/CMS3/NtupleMaker/ntuple.root\",  \
    \"/home/users/cgeorge/CMS3/CMSSW_7_4_1_patch1/src/CMS3/NtupleMaker/ntuple.root\",  \
    true, false)");

}
