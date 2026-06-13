// fichero 38674 -- macros y constantes
#define LIMITE_38674 38774
#define FACTOR_38674 5

int aplicar_limite38674(int valor) {
    if (valor > LIMITE_38674) return LIMITE_38674;
    return valor * FACTOR_38674;
}
