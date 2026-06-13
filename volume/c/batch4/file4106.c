// fichero 4106 -- macros y constantes
#define LIMITE_4106 4206
#define FACTOR_4106 2

int aplicar_limite4106(int valor) {
    if (valor > LIMITE_4106) return LIMITE_4106;
    return valor * FACTOR_4106;
}
