// fichero 28382 -- macros y constantes
#define LIMITE_28382 28482
#define FACTOR_28382 3

int aplicar_limite28382(int valor) {
    if (valor > LIMITE_28382) return LIMITE_28382;
    return valor * FACTOR_28382;
}
