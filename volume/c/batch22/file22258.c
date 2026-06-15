// fichero 22258 -- macros y constantes -- MODIFICADO
#define LIMITE_22258 22458
#define FACTOR_22258 5

int aplicar_limite22258(int valor) {
    if (valor > LIMITE_22258) return LIMITE_22258;
    return valor * FACTOR_22258;
}
