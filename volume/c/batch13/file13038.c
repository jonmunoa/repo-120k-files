// fichero 13038 -- macros y constantes
#define LIMITE_13038 13138
#define FACTOR_13038 4

int aplicar_limite13038(int valor) {
    if (valor > LIMITE_13038) return LIMITE_13038;
    return valor * FACTOR_13038;
}
