// fichero 15110 -- macros y constantes
#define LIMITE_15110 15210
#define FACTOR_15110 1

int aplicar_limite15110(int valor) {
    if (valor > LIMITE_15110) return LIMITE_15110;
    return valor * FACTOR_15110;
}
