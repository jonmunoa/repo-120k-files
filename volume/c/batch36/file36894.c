// fichero 36894 -- macros y constantes
#define LIMITE_36894 36994
#define FACTOR_36894 5

int aplicar_limite36894(int valor) {
    if (valor > LIMITE_36894) return LIMITE_36894;
    return valor * FACTOR_36894;
}
