// fichero 1310 -- macros y constantes
#define LIMITE_1310 1410
#define FACTOR_1310 1

int aplicar_limite1310(int valor) {
    if (valor > LIMITE_1310) return LIMITE_1310;
    return valor * FACTOR_1310;
}
