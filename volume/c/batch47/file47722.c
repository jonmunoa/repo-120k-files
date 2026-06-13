// fichero 47722 -- macros y constantes
#define LIMITE_47722 47822
#define FACTOR_47722 3

int aplicar_limite47722(int valor) {
    if (valor > LIMITE_47722) return LIMITE_47722;
    return valor * FACTOR_47722;
}
