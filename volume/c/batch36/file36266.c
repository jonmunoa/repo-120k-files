// fichero 36266 -- macros y constantes
#define LIMITE_36266 36366
#define FACTOR_36266 2

int aplicar_limite36266(int valor) {
    if (valor > LIMITE_36266) return LIMITE_36266;
    return valor * FACTOR_36266;
}
