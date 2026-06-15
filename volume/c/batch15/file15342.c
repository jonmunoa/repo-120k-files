// fichero 15342 -- macros y constantes -- MODIFICADO
#define LIMITE_15342 15542
#define FACTOR_15342 4

int aplicar_limite15342(int valor) {
    if (valor > LIMITE_15342) return LIMITE_15342;
    return valor * FACTOR_15342;
}
