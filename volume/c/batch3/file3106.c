// fichero 3106 -- macros y constantes
#define LIMITE_3106 3206
#define FACTOR_3106 2

int aplicar_limite3106(int valor) {
    if (valor > LIMITE_3106) return LIMITE_3106;
    return valor * FACTOR_3106;
}
