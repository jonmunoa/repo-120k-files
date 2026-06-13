// fichero 49722 -- macros y constantes
#define LIMITE_49722 49822
#define FACTOR_49722 3

int aplicar_limite49722(int valor) {
    if (valor > LIMITE_49722) return LIMITE_49722;
    return valor * FACTOR_49722;
}
