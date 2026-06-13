// fichero 33826 -- macros y constantes
#define LIMITE_33826 33926
#define FACTOR_33826 2

int aplicar_limite33826(int valor) {
    if (valor > LIMITE_33826) return LIMITE_33826;
    return valor * FACTOR_33826;
}
