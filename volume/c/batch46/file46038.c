// fichero 46038 -- macros y constantes
#define LIMITE_46038 46138
#define FACTOR_46038 4

int aplicar_limite46038(int valor) {
    if (valor > LIMITE_46038) return LIMITE_46038;
    return valor * FACTOR_46038;
}
