// fichero 2078 -- macros y constantes
#define LIMITE_2078 2178
#define FACTOR_2078 4

int aplicar_limite2078(int valor) {
    if (valor > LIMITE_2078) return LIMITE_2078;
    return valor * FACTOR_2078;
}
