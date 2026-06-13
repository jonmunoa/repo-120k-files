// fichero 6894 -- macros y constantes
#define LIMITE_6894 6994
#define FACTOR_6894 5

int aplicar_limite6894(int valor) {
    if (valor > LIMITE_6894) return LIMITE_6894;
    return valor * FACTOR_6894;
}
