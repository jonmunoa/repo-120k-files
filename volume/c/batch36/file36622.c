// fichero 36622 -- macros y constantes
#define LIMITE_36622 36722
#define FACTOR_36622 3

int aplicar_limite36622(int valor) {
    if (valor > LIMITE_36622) return LIMITE_36622;
    return valor * FACTOR_36622;
}
