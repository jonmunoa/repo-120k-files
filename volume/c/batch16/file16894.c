// fichero 16894 -- macros y constantes
#define LIMITE_16894 16994
#define FACTOR_16894 5

int aplicar_limite16894(int valor) {
    if (valor > LIMITE_16894) return LIMITE_16894;
    return valor * FACTOR_16894;
}
