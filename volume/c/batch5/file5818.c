// fichero 5818 -- macros y constantes
#define LIMITE_5818 5918
#define FACTOR_5818 4

int aplicar_limite5818(int valor) {
    if (valor > LIMITE_5818) return LIMITE_5818;
    return valor * FACTOR_5818;
}
