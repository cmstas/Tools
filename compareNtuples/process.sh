#!/bin/bash

pdflatex overview.tex
ps2pdf diff.ps
gs -sDEVICE=pdfwrite -dNOPAUSE -dBATCH -dSAFER -sOutputFile=results.pdf overview.pdf diff.pdf
