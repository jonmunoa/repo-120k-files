// fichero 32038 -- macros y constantes
#define LIMITE_32038 32138
#define FACTOR_32038 4

int aplicar_limite32038(int valor) {
    if (valor > LIMITE_32038) return LIMITE_32038;
    return valor * FACTOR_32038;
}
