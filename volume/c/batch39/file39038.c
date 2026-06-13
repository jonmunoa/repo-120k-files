// fichero 39038 -- macros y constantes
#define LIMITE_39038 39138
#define FACTOR_39038 4

int aplicar_limite39038(int valor) {
    if (valor > LIMITE_39038) return LIMITE_39038;
    return valor * FACTOR_39038;
}
