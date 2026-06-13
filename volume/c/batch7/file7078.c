// fichero 7078 -- macros y constantes
#define LIMITE_7078 7178
#define FACTOR_7078 4

int aplicar_limite7078(int valor) {
    if (valor > LIMITE_7078) return LIMITE_7078;
    return valor * FACTOR_7078;
}
