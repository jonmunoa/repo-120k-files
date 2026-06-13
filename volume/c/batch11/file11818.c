// fichero 11818 -- macros y constantes
#define LIMITE_11818 11918
#define FACTOR_11818 4

int aplicar_limite11818(int valor) {
    if (valor > LIMITE_11818) return LIMITE_11818;
    return valor * FACTOR_11818;
}
