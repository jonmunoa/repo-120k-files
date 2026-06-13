// fichero 4078 -- macros y constantes
#define LIMITE_4078 4178
#define FACTOR_4078 4

int aplicar_limite4078(int valor) {
    if (valor > LIMITE_4078) return LIMITE_4078;
    return valor * FACTOR_4078;
}
