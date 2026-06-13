// fichero 36990 -- macros y constantes
#define LIMITE_36990 37090
#define FACTOR_36990 1

int aplicar_limite36990(int valor) {
    if (valor > LIMITE_36990) return LIMITE_36990;
    return valor * FACTOR_36990;
}
