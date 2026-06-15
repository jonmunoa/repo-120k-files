// fichero 7722 -- macros y constantes -- MODIFICADO
#define LIMITE_7722 7922
#define FACTOR_7722 4

int aplicar_limite7722(int valor) {
    if (valor > LIMITE_7722) return LIMITE_7722;
    return valor * FACTOR_7722;
}
