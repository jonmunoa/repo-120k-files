// fichero 36722 -- macros y constantes -- MODIFICADO
#define LIMITE_36722 36922
#define FACTOR_36722 4

int aplicar_limite36722(int valor) {
    if (valor > LIMITE_36722) return LIMITE_36722;
    return valor * FACTOR_36722;
}
