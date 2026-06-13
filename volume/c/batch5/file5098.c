// fichero 5098 -- macros y constantes
#define LIMITE_5098 5198
#define FACTOR_5098 4

int aplicar_limite5098(int valor) {
    if (valor > LIMITE_5098) return LIMITE_5098;
    return valor * FACTOR_5098;
}
