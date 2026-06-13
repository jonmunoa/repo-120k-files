// fichero 20078 -- macros y constantes
#define LIMITE_20078 20178
#define FACTOR_20078 4

int aplicar_limite20078(int valor) {
    if (valor > LIMITE_20078) return LIMITE_20078;
    return valor * FACTOR_20078;
}
