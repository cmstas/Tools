#Compare Ntuples for CMS3

This is a "core dump" of every branch in CMS3 for *TWO RELEASES*.  If you want one release by itself, you are looking for cmstas/Tools/validation.  

Note: this may require some maintenance before it works!!

###Instructions:
1. In do.C, put the OLD SAMPLE on line 5 and the NEW sample on line 5.  You should also decide if you want to do force it to draw even the identical histograms (arg3, true/false) and if you want error bars (arg4, true/false).
2. root do.C
3. ". process.sh"
4.  Now diff.pdf has everything you need.  
