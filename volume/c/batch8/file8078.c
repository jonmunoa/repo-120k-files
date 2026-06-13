// fichero 8078 -- macros y constantes
#define LIMITE_8078 8178
#define FACTOR_8078 4

int aplicar_limite8078(int valor) {
    if (valor > LIMITE_8078) return LIMITE_8078;
    return valor * FACTOR_8078;
}
