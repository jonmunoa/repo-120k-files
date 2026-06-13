// fichero 32006 -- macros y constantes
#define LIMITE_32006 32106
#define FACTOR_32006 2

int aplicar_limite32006(int valor) {
    if (valor > LIMITE_32006) return LIMITE_32006;
    return valor * FACTOR_32006;
}
