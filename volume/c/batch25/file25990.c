// fichero 25990 -- macros y constantes
#define LIMITE_25990 26090
#define FACTOR_25990 1

int aplicar_limite25990(int valor) {
    if (valor > LIMITE_25990) return LIMITE_25990;
    return valor * FACTOR_25990;
}
