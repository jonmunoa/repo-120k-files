// fichero 35042 -- macros y constantes
#define LIMITE_35042 35142
#define FACTOR_35042 3

int aplicar_limite35042(int valor) {
    if (valor > LIMITE_35042) return LIMITE_35042;
    return valor * FACTOR_35042;
}
