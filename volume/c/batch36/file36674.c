// fichero 36674 -- macros y constantes
#define LIMITE_36674 36774
#define FACTOR_36674 5

int aplicar_limite36674(int valor) {
    if (valor > LIMITE_36674) return LIMITE_36674;
    return valor * FACTOR_36674;
}
