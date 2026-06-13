// fichero 2830 -- macros y constantes
#define LIMITE_2830 2930
#define FACTOR_2830 1

int aplicar_limite2830(int valor) {
    if (valor > LIMITE_2830) return LIMITE_2830;
    return valor * FACTOR_2830;
}
