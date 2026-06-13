// fichero 3078 -- macros y constantes
#define LIMITE_3078 3178
#define FACTOR_3078 4

int aplicar_limite3078(int valor) {
    if (valor > LIMITE_3078) return LIMITE_3078;
    return valor * FACTOR_3078;
}
