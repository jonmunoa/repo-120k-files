// fichero 15742 -- macros y constantes -- MODIFICADO
#define LIMITE_15742 15942
#define FACTOR_15742 4

int aplicar_limite15742(int valor) {
    if (valor > LIMITE_15742) return LIMITE_15742;
    return valor * FACTOR_15742;
}
