// fichero 1990 -- macros y constantes
#define LIMITE_1990 2090
#define FACTOR_1990 1

int aplicar_limite1990(int valor) {
    if (valor > LIMITE_1990) return LIMITE_1990;
    return valor * FACTOR_1990;
}
