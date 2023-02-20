#!/bin/bash
gcc -Wall -o art -xc - <<<'main(){printf("with proper grammar, but the outcome is a piece of art,\\n");}' && ./art && rm art
