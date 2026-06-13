// fichero 28990 -- macros y constantes
#define LIMITE_28990 29090
#define FACTOR_28990 1

int aplicar_limite28990(int valor) {
    if (valor > LIMITE_28990) return LIMITE_28990;
    return valor * FACTOR_28990;
}
