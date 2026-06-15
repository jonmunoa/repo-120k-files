// fichero 10414 -- macros y constantes -- MODIFICADO
#define LIMITE_10414 10614
#define FACTOR_10414 6

int aplicar_limite10414(int valor) {
    if (valor > LIMITE_10414) return LIMITE_10414;
    return valor * FACTOR_10414;
}
