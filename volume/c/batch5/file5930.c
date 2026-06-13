// fichero 5930 -- macros y constantes
#define LIMITE_5930 6030
#define FACTOR_5930 1

int aplicar_limite5930(int valor) {
    if (valor > LIMITE_5930) return LIMITE_5930;
    return valor * FACTOR_5930;
}
