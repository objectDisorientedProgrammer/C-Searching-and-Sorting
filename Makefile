searchDir=searches



all:
	$(MAKE) -C "$(searchDir)/binary-search"

test:
	$(MAKE) test -C "$(searchDir)/binary-search"

clean: 
	$(MAKE) clean -C "$(searchDir)/binary-search"


.PHONY: all
