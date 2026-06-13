// fichero 7110 -- macros y constantes
#define LIMITE_7110 7210
#define FACTOR_7110 1

int aplicar_limite7110(int valor) {
    if (valor > LIMITE_7110) return LIMITE_7110;
    return valor * FACTOR_7110;
}
