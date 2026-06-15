// fichero 41258 -- macros y constantes -- MODIFICADO
#define LIMITE_41258 41458
#define FACTOR_41258 5

int aplicar_limite41258(int valor) {
    if (valor > LIMITE_41258) return LIMITE_41258;
    return valor * FACTOR_41258;
}
