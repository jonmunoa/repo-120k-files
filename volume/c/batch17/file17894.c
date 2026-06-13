// fichero 17894 -- macros y constantes
#define LIMITE_17894 17994
#define FACTOR_17894 5

int aplicar_limite17894(int valor) {
    if (valor > LIMITE_17894) return LIMITE_17894;
    return valor * FACTOR_17894;
}
