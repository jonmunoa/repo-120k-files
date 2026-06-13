// fichero 38038 -- macros y constantes
#define LIMITE_38038 38138
#define FACTOR_38038 4

int aplicar_limite38038(int valor) {
    if (valor > LIMITE_38038) return LIMITE_38038;
    return valor * FACTOR_38038;
}
