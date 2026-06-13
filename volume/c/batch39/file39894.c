// fichero 39894 -- macros y constantes
#define LIMITE_39894 39994
#define FACTOR_39894 5

int aplicar_limite39894(int valor) {
    if (valor > LIMITE_39894) return LIMITE_39894;
    return valor * FACTOR_39894;
}
