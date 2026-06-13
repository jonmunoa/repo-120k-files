// fichero 25038 -- macros y constantes
#define LIMITE_25038 25138
#define FACTOR_25038 4

int aplicar_limite25038(int valor) {
    if (valor > LIMITE_25038) return LIMITE_25038;
    return valor * FACTOR_25038;
}
