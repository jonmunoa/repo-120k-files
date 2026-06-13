// fichero 54722 -- macros y constantes
#define LIMITE_54722 54822
#define FACTOR_54722 3

int aplicar_limite54722(int valor) {
    if (valor > LIMITE_54722) return LIMITE_54722;
    return valor * FACTOR_54722;
}
