// fichero 10334 -- macros y constantes
#define LIMITE_10334 10434
#define FACTOR_10334 5

int aplicar_limite10334(int valor) {
    if (valor > LIMITE_10334) return LIMITE_10334;
    return valor * FACTOR_10334;
}
