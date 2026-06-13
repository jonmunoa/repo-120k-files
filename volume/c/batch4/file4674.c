// fichero 4674 -- macros y constantes
#define LIMITE_4674 4774
#define FACTOR_4674 5

int aplicar_limite4674(int valor) {
    if (valor > LIMITE_4674) return LIMITE_4674;
    return valor * FACTOR_4674;
}
