#IMPORTANT DIRECTORIES
MAIN = thesis/

THESIS = PhDthesis

TARGET = $(MAIN)$(THESIS).tex

PDF = $(THESIS).pdf



.PHONY: PhDthesis.pdf all clean

all: PhDthesis.pdf

# MAIN LATEXMK RULE

# -pdf tells latexmk to generate PDF directly (instead of DVI).
# -pdflatex="" tells latexmk to call a specific backend with specific options.
# -use-make tells latexmk to call make for generating missing files.

# -interaction=nonstopmode keeps the pdflatex backend from stopping at a
# missing file reference and interactively asking you for an alternative.

view:
	evince $(PDF)

PhDthesis.pdf: $(TARGET)
	-latexmk -pdf -f -pdflatex="pdflatex -interaction=nonstopmode" -outdir=./ -cd -use-make $<
	@cp -v $(MAIN)$(PDF) .

clean:
	rm -f $(PDF)
	latexmk -CA -cd $(TARGET)

full: clean all view
