// fichero 30818 -- macros y constantes
#define LIMITE_30818 30918
#define FACTOR_30818 4

int aplicar_limite30818(int valor) {
    if (valor > LIMITE_30818) return LIMITE_30818;
    return valor * FACTOR_30818;
}
