// fichero 17722 -- macros y constantes -- MODIFICADO
#define LIMITE_17722 17922
#define FACTOR_17722 4

int aplicar_limite17722(int valor) {
    if (valor > LIMITE_17722) return LIMITE_17722;
    return valor * FACTOR_17722;
}
