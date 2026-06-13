// fichero 16270 -- macros y constantes
#define LIMITE_16270 16370
#define FACTOR_16270 1

int aplicar_limite16270(int valor) {
    if (valor > LIMITE_16270) return LIMITE_16270;
    return valor * FACTOR_16270;
}
