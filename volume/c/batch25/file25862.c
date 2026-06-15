// fichero 25862 -- macros y constantes -- MODIFICADO
#define LIMITE_25862 26062
#define FACTOR_25862 4

int aplicar_limite25862(int valor) {
    if (valor > LIMITE_25862) return LIMITE_25862;
    return valor * FACTOR_25862;
}
