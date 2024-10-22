#!/bin/bash

# Define the output file
OUTPUT="programs.pdf"


# Find all C files in the M1, M2, and M3 folders
find ./TPEC/M1 ./TPEC/M2 ./TPEC/M3 -name '*.c' | xargs enscript -p output.ps

# Convert PostScript to PDF
ps2pdf output.ps $OUTPUT

# Clean up temporary PostScript file
rm output.ps
