// fichero 36078 -- macros y constantes
#define LIMITE_36078 36178
#define FACTOR_36078 4

int aplicar_limite36078(int valor) {
    if (valor > LIMITE_36078) return LIMITE_36078;
    return valor * FACTOR_36078;
}
