// fichero 36342 -- macros y constantes
#define LIMITE_36342 36442
#define FACTOR_36342 3

int aplicar_limite36342(int valor) {
    if (valor > LIMITE_36342) return LIMITE_36342;
    return valor * FACTOR_36342;
}
