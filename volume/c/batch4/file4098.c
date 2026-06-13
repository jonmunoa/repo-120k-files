// fichero 4098 -- macros y constantes
#define LIMITE_4098 4198
#define FACTOR_4098 4

int aplicar_limite4098(int valor) {
    if (valor > LIMITE_4098) return LIMITE_4098;
    return valor * FACTOR_4098;
}
