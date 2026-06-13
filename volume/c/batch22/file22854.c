// fichero 22854 -- macros y constantes
#define LIMITE_22854 22954
#define FACTOR_22854 5

int aplicar_limite22854(int valor) {
    if (valor > LIMITE_22854) return LIMITE_22854;
    return valor * FACTOR_22854;
}
