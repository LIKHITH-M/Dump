#!/bin/bash

# Define the output file
OUTPUT="programs.pdf"

# Convert all C files to a single PostScript file
enscript -p output.ps *.c

# Convert PostScript to PDF
ps2pdf output.ps $OUTPUT

# Clean up temporary PostScript file
rm output.ps
