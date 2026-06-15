// fichero 22854 -- macros y constantes -- MODIFICADO
#define LIMITE_22854 23054
#define FACTOR_22854 6

int aplicar_limite22854(int valor) {
    if (valor > LIMITE_22854) return LIMITE_22854;
    return valor * FACTOR_22854;
}
