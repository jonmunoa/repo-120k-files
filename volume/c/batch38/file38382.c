// fichero 38382 -- macros y constantes
#define LIMITE_38382 38482
#define FACTOR_38382 3

int aplicar_limite38382(int valor) {
    if (valor > LIMITE_38382) return LIMITE_38382;
    return valor * FACTOR_38382;
}
