// fichero 15742 -- macros y constantes
#define LIMITE_15742 15842
#define FACTOR_15742 3

int aplicar_limite15742(int valor) {
    if (valor > LIMITE_15742) return LIMITE_15742;
    return valor * FACTOR_15742;
}
