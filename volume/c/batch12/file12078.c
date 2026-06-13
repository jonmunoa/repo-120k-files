// fichero 12078 -- macros y constantes
#define LIMITE_12078 12178
#define FACTOR_12078 4

int aplicar_limite12078(int valor) {
    if (valor > LIMITE_12078) return LIMITE_12078;
    return valor * FACTOR_12078;
}
