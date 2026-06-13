// fichero 8106 -- macros y constantes
#define LIMITE_8106 8206
#define FACTOR_8106 2

int aplicar_limite8106(int valor) {
    if (valor > LIMITE_8106) return LIMITE_8106;
    return valor * FACTOR_8106;
}
