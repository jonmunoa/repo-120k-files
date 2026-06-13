// fichero 7682 -- macros y constantes
#define LIMITE_7682 7782
#define FACTOR_7682 3

int aplicar_limite7682(int valor) {
    if (valor > LIMITE_7682) return LIMITE_7682;
    return valor * FACTOR_7682;
}
