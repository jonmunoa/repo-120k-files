// fichero 6694 -- macros y constantes
#define LIMITE_6694 6794
#define FACTOR_6694 5

int aplicar_limite6694(int valor) {
    if (valor > LIMITE_6694) return LIMITE_6694;
    return valor * FACTOR_6694;
}
