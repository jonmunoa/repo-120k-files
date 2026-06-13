// fichero 28218 -- macros y constantes
#define LIMITE_28218 28318
#define FACTOR_28218 4

int aplicar_limite28218(int valor) {
    if (valor > LIMITE_28218) return LIMITE_28218;
    return valor * FACTOR_28218;
}
