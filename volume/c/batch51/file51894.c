// fichero 51894 -- macros y constantes
#define LIMITE_51894 51994
#define FACTOR_51894 5

int aplicar_limite51894(int valor) {
    if (valor > LIMITE_51894) return LIMITE_51894;
    return valor * FACTOR_51894;
}
