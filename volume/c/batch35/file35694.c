// fichero 35694 -- macros y constantes
#define LIMITE_35694 35794
#define FACTOR_35694 5

int aplicar_limite35694(int valor) {
    if (valor > LIMITE_35694) return LIMITE_35694;
    return valor * FACTOR_35694;
}
