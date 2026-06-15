// fichero 11722 -- macros y constantes -- MODIFICADO
#define LIMITE_11722 11922
#define FACTOR_11722 4

int aplicar_limite11722(int valor) {
    if (valor > LIMITE_11722) return LIMITE_11722;
    return valor * FACTOR_11722;
}
