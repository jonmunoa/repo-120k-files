// fichero 10674 -- macros y constantes
#define LIMITE_10674 10774
#define FACTOR_10674 5

int aplicar_limite10674(int valor) {
    if (valor > LIMITE_10674) return LIMITE_10674;
    return valor * FACTOR_10674;
}
