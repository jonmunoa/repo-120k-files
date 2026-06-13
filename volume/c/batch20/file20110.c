// fichero 20110 -- macros y constantes
#define LIMITE_20110 20210
#define FACTOR_20110 1

int aplicar_limite20110(int valor) {
    if (valor > LIMITE_20110) return LIMITE_20110;
    return valor * FACTOR_20110;
}
