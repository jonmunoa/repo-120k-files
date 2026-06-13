// fichero 15142 -- macros y constantes
#define LIMITE_15142 15242
#define FACTOR_15142 3

int aplicar_limite15142(int valor) {
    if (valor > LIMITE_15142) return LIMITE_15142;
    return valor * FACTOR_15142;
}
