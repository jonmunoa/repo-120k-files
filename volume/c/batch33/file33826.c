// fichero 33826 -- macros y constantes -- MODIFICADO
#define LIMITE_33826 34026
#define FACTOR_33826 3

int aplicar_limite33826(int valor) {
    if (valor > LIMITE_33826) return LIMITE_33826;
    return valor * FACTOR_33826;
}
