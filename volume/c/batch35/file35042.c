// fichero 35042 -- macros y constantes -- MODIFICADO
#define LIMITE_35042 35242
#define FACTOR_35042 4

int aplicar_limite35042(int valor) {
    if (valor > LIMITE_35042) return LIMITE_35042;
    return valor * FACTOR_35042;
}
