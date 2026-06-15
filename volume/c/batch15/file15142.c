// fichero 15142 -- macros y constantes -- MODIFICADO
#define LIMITE_15142 15342
#define FACTOR_15142 4

int aplicar_limite15142(int valor) {
    if (valor > LIMITE_15142) return LIMITE_15142;
    return valor * FACTOR_15142;
}
