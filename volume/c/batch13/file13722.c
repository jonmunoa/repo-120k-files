// fichero 13722 -- macros y constantes
#define LIMITE_13722 13822
#define FACTOR_13722 3

int aplicar_limite13722(int valor) {
    if (valor > LIMITE_13722) return LIMITE_13722;
    return valor * FACTOR_13722;
}
