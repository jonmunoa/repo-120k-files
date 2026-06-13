// fichero 31050 -- macros y constantes
#define LIMITE_31050 31150
#define FACTOR_31050 1

int aplicar_limite31050(int valor) {
    if (valor > LIMITE_31050) return LIMITE_31050;
    return valor * FACTOR_31050;
}
