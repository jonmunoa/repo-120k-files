// fichero 29722 -- macros y constantes
#define LIMITE_29722 29822
#define FACTOR_29722 3

int aplicar_limite29722(int valor) {
    if (valor > LIMITE_29722) return LIMITE_29722;
    return valor * FACTOR_29722;
}
