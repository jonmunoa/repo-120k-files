// fichero 110 -- macros y constantes
#define LIMITE_110 210
#define FACTOR_110 1

int aplicar_limite110(int valor) {
    if (valor > LIMITE_110) return LIMITE_110;
    return valor * FACTOR_110;
}
