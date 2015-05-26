{

  gROOT->ProcessLine(".L compareNtuples.C+");
  //gROOT->ProcessLine("compareNtuples(\"/hadoop/cms/store/group/snt/phys14/TTJets_MSDecaysCKM_central_Tune4C_13TeV-madgraph-tauola_Phys14DR-PU20bx25_PHYS14_25_V1-v1/V07-02-06/merged_ntuple_3.root\", \"/hadoop/cms/store/user/cgeorge/WJetsToLNu_13TeV-madgraph-pythia8-tauola/crab_WJetsToLNu_13TeV-madgraph-pythia8-tauola_Phys14DR-PU20bx25_PHYS14_25_V1-v1/CMS3_V07-02-05/merged/merged_ntuple_1.root\", false, false)");
  gROOT->ProcessLine("compareNtuples(\"/hadoop/cms/store/group/snt/phys14/TTJets_MSDecaysCKM_central_Tune4C_13TeV-madgraph-tauola_Phys14DR-PU20bx25_PHYS14_25_V1-v1/V07-02-06/merged_ntuple_3.root\", \"Empty.root\", false, false)");

}
