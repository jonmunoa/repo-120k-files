// fichero 12722 -- macros y constantes
#define LIMITE_12722 12822
#define FACTOR_12722 3

int aplicar_limite12722(int valor) {
    if (valor > LIMITE_12722) return LIMITE_12722;
    return valor * FACTOR_12722;
}
