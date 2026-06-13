// fichero 13106 -- macros y constantes
#define LIMITE_13106 13206
#define FACTOR_13106 2

int aplicar_limite13106(int valor) {
    if (valor > LIMITE_13106) return LIMITE_13106;
    return valor * FACTOR_13106;
}
