// fichero 35038 -- macros y constantes
#define LIMITE_35038 35138
#define FACTOR_35038 4

int aplicar_limite35038(int valor) {
    if (valor > LIMITE_35038) return LIMITE_35038;
    return valor * FACTOR_35038;
}
