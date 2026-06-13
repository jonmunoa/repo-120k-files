// fichero 10894 -- macros y constantes
#define LIMITE_10894 10994
#define FACTOR_10894 5

int aplicar_limite10894(int valor) {
    if (valor > LIMITE_10894) return LIMITE_10894;
    return valor * FACTOR_10894;
}
