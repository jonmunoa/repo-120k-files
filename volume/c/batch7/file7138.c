// fichero 7138 -- macros y constantes -- MODIFICADO
#define LIMITE_7138 7338
#define FACTOR_7138 5

int aplicar_limite7138(int valor) {
    if (valor > LIMITE_7138) return LIMITE_7138;
    return valor * FACTOR_7138;
}
