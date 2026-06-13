// fichero 41258 -- macros y constantes
#define LIMITE_41258 41358
#define FACTOR_41258 4

int aplicar_limite41258(int valor) {
    if (valor > LIMITE_41258) return LIMITE_41258;
    return valor * FACTOR_41258;
}
