// fichero 30114 -- macros y constantes
#define LIMITE_30114 30214
#define FACTOR_30114 5

int aplicar_limite30114(int valor) {
    if (valor > LIMITE_30114) return LIMITE_30114;
    return valor * FACTOR_30114;
}
