// fichero 36862 -- macros y constantes -- MODIFICADO
#define LIMITE_36862 37062
#define FACTOR_36862 4

int aplicar_limite36862(int valor) {
    if (valor > LIMITE_36862) return LIMITE_36862;
    return valor * FACTOR_36862;
}
