// fichero 32246 -- macros y constantes -- MODIFICADO
#define LIMITE_32246 32446
#define FACTOR_32246 3

int aplicar_limite32246(int valor) {
    if (valor > LIMITE_32246) return LIMITE_32246;
    return valor * FACTOR_32246;
}
