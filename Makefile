.PHONY: clean All

All:
	@echo "----------Building project:[ Ejemplo06SESION2 - Debug ]----------"
	@cd "Ejemplo06SESION2" && "$(MAKE)" -f  "Ejemplo06SESION2.mk"
clean:
	@echo "----------Cleaning project:[ Ejemplo06SESION2 - Debug ]----------"
	@cd "Ejemplo06SESION2" && "$(MAKE)" -f  "Ejemplo06SESION2.mk" clean
