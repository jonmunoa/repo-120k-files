// fichero 1110 -- macros y constantes
#define LIMITE_1110 1210
#define FACTOR_1110 1

int aplicar_limite1110(int valor) {
    if (valor > LIMITE_1110) return LIMITE_1110;
    return valor * FACTOR_1110;
}
