// fichero 16398 -- macros y constantes
#define LIMITE_16398 16498
#define FACTOR_16398 4

int aplicar_limite16398(int valor) {
    if (valor > LIMITE_16398) return LIMITE_16398;
    return valor * FACTOR_16398;
}
