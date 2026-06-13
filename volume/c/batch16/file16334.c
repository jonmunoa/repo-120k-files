// fichero 16334 -- macros y constantes
#define LIMITE_16334 16434
#define FACTOR_16334 5

int aplicar_limite16334(int valor) {
    if (valor > LIMITE_16334) return LIMITE_16334;
    return valor * FACTOR_16334;
}
