// fichero 8030 -- macros y constantes
#define LIMITE_8030 8130
#define FACTOR_8030 1

int aplicar_limite8030(int valor) {
    if (valor > LIMITE_8030) return LIMITE_8030;
    return valor * FACTOR_8030;
}
