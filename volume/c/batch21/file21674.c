// fichero 21674 -- macros y constantes
#define LIMITE_21674 21774
#define FACTOR_21674 5

int aplicar_limite21674(int valor) {
    if (valor > LIMITE_21674) return LIMITE_21674;
    return valor * FACTOR_21674;
}
