// fichero 41138 -- macros y constantes -- MODIFICADO
#define LIMITE_41138 41338
#define FACTOR_41138 5

int aplicar_limite41138(int valor) {
    if (valor > LIMITE_41138) return LIMITE_41138;
    return valor * FACTOR_41138;
}
