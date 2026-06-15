// fichero 4142 -- macros y constantes -- MODIFICADO
#define LIMITE_4142 4342
#define FACTOR_4142 4

int aplicar_limite4142(int valor) {
    if (valor > LIMITE_4142) return LIMITE_4142;
    return valor * FACTOR_4142;
}
