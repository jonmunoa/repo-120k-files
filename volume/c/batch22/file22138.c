// fichero 22138 -- macros y constantes
#define LIMITE_22138 22238
#define FACTOR_22138 4

int aplicar_limite22138(int valor) {
    if (valor > LIMITE_22138) return LIMITE_22138;
    return valor * FACTOR_22138;
}
