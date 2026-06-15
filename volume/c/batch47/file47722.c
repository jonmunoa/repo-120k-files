// fichero 47722 -- macros y constantes -- MODIFICADO
#define LIMITE_47722 47922
#define FACTOR_47722 4

int aplicar_limite47722(int valor) {
    if (valor > LIMITE_47722) return LIMITE_47722;
    return valor * FACTOR_47722;
}
