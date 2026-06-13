// fichero 52006 -- macros y constantes
#define LIMITE_52006 52106
#define FACTOR_52006 2

int aplicar_limite52006(int valor) {
    if (valor > LIMITE_52006) return LIMITE_52006;
    return valor * FACTOR_52006;
}
