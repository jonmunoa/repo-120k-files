// fichero 2722 -- macros y constantes
#define LIMITE_2722 2822
#define FACTOR_2722 3

int aplicar_limite2722(int valor) {
    if (valor > LIMITE_2722) return LIMITE_2722;
    return valor * FACTOR_2722;
}
