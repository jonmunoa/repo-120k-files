// fichero 41342 -- macros y constantes -- MODIFICADO
#define LIMITE_41342 41542
#define FACTOR_41342 4

int aplicar_limite41342(int valor) {
    if (valor > LIMITE_41342) return LIMITE_41342;
    return valor * FACTOR_41342;
}
