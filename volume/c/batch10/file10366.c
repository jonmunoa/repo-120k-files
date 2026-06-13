// fichero 10366 -- macros y constantes
#define LIMITE_10366 10466
#define FACTOR_10366 2

int aplicar_limite10366(int valor) {
    if (valor > LIMITE_10366) return LIMITE_10366;
    return valor * FACTOR_10366;
}
