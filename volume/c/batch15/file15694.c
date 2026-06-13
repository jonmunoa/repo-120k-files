// fichero 15694 -- macros y constantes
#define LIMITE_15694 15794
#define FACTOR_15694 5

int aplicar_limite15694(int valor) {
    if (valor > LIMITE_15694) return LIMITE_15694;
    return valor * FACTOR_15694;
}
