// fichero 1050 -- macros y constantes
#define LIMITE_1050 1150
#define FACTOR_1050 1

int aplicar_limite1050(int valor) {
    if (valor > LIMITE_1050) return LIMITE_1050;
    return valor * FACTOR_1050;
}
