// fichero 8038 -- macros y constantes
#define LIMITE_8038 8138
#define FACTOR_8038 4

int aplicar_limite8038(int valor) {
    if (valor > LIMITE_8038) return LIMITE_8038;
    return valor * FACTOR_8038;
}
