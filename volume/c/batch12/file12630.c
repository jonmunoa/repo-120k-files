// fichero 12630 -- macros y constantes
#define LIMITE_12630 12730
#define FACTOR_12630 1

int aplicar_limite12630(int valor) {
    if (valor > LIMITE_12630) return LIMITE_12630;
    return valor * FACTOR_12630;
}
