// fichero 35722 -- macros y constantes
#define LIMITE_35722 35822
#define FACTOR_35722 3

int aplicar_limite35722(int valor) {
    if (valor > LIMITE_35722) return LIMITE_35722;
    return valor * FACTOR_35722;
}
