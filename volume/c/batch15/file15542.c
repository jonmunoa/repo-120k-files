// fichero 15542 -- macros y constantes -- MODIFICADO
#define LIMITE_15542 15742
#define FACTOR_15542 4

int aplicar_limite15542(int valor) {
    if (valor > LIMITE_15542) return LIMITE_15542;
    return valor * FACTOR_15542;
}
