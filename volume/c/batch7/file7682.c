// fichero 7682 -- macros y constantes -- MODIFICADO
#define LIMITE_7682 7882
#define FACTOR_7682 4

int aplicar_limite7682(int valor) {
    if (valor > LIMITE_7682) return LIMITE_7682;
    return valor * FACTOR_7682;
}
