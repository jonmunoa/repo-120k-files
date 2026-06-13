// fichero 28038 -- macros y constantes
#define LIMITE_28038 28138
#define FACTOR_28038 4

int aplicar_limite28038(int valor) {
    if (valor > LIMITE_28038) return LIMITE_28038;
    return valor * FACTOR_28038;
}
