// fichero 37342 -- macros y constantes -- MODIFICADO
#define LIMITE_37342 37542
#define FACTOR_37342 4

int aplicar_limite37342(int valor) {
    if (valor > LIMITE_37342) return LIMITE_37342;
    return valor * FACTOR_37342;
}
