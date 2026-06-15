// fichero 14138 -- macros y constantes -- MODIFICADO
#define LIMITE_14138 14338
#define FACTOR_14138 5

int aplicar_limite14138(int valor) {
    if (valor > LIMITE_14138) return LIMITE_14138;
    return valor * FACTOR_14138;
}
