// fichero 7482 -- macros y constantes -- MODIFICADO
#define LIMITE_7482 7682
#define FACTOR_7482 4

int aplicar_limite7482(int valor) {
    if (valor > LIMITE_7482) return LIMITE_7482;
    return valor * FACTOR_7482;
}
