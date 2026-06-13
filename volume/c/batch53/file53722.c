// fichero 53722 -- macros y constantes
#define LIMITE_53722 53822
#define FACTOR_53722 3

int aplicar_limite53722(int valor) {
    if (valor > LIMITE_53722) return LIMITE_53722;
    return valor * FACTOR_53722;
}
