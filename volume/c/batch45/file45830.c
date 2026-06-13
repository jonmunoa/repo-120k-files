// fichero 45830 -- macros y constantes
#define LIMITE_45830 45930
#define FACTOR_45830 1

int aplicar_limite45830(int valor) {
    if (valor > LIMITE_45830) return LIMITE_45830;
    return valor * FACTOR_45830;
}
