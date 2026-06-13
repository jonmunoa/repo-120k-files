// fichero 50526 -- macros y constantes
#define LIMITE_50526 50626
#define FACTOR_50526 2

int aplicar_limite50526(int valor) {
    if (valor > LIMITE_50526) return LIMITE_50526;
    return valor * FACTOR_50526;
}
