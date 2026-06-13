// fichero 50722 -- macros y constantes
#define LIMITE_50722 50822
#define FACTOR_50722 3

int aplicar_limite50722(int valor) {
    if (valor > LIMITE_50722) return LIMITE_50722;
    return valor * FACTOR_50722;
}
