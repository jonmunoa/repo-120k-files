// fichero 22138 -- macros y constantes -- MODIFICADO
#define LIMITE_22138 22338
#define FACTOR_22138 5

int aplicar_limite22138(int valor) {
    if (valor > LIMITE_22138) return LIMITE_22138;
    return valor * FACTOR_22138;
}
