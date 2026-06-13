// fichero 28318 -- macros y constantes
#define LIMITE_28318 28418
#define FACTOR_28318 4

int aplicar_limite28318(int valor) {
    if (valor > LIMITE_28318) return LIMITE_28318;
    return valor * FACTOR_28318;
}
