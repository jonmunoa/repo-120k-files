// fichero 39722 -- macros y constantes
#define LIMITE_39722 39822
#define FACTOR_39722 3

int aplicar_limite39722(int valor) {
    if (valor > LIMITE_39722) return LIMITE_39722;
    return valor * FACTOR_39722;
}
