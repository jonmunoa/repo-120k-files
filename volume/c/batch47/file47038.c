// fichero 47038 -- macros y constantes
#define LIMITE_47038 47138
#define FACTOR_47038 4

int aplicar_limite47038(int valor) {
    if (valor > LIMITE_47038) return LIMITE_47038;
    return valor * FACTOR_47038;
}
