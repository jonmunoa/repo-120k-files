// fichero 47354 -- macros y constantes -- MODIFICADO
#define LIMITE_47354 47554
#define FACTOR_47354 6

int aplicar_limite47354(int valor) {
    if (valor > LIMITE_47354) return LIMITE_47354;
    return valor * FACTOR_47354;
}
