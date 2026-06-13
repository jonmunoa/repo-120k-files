// fichero 8054 -- macros y constantes
#define LIMITE_8054 8154
#define FACTOR_8054 5

int aplicar_limite8054(int valor) {
    if (valor > LIMITE_8054) return LIMITE_8054;
    return valor * FACTOR_8054;
}
