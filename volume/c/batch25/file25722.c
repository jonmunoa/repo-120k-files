// fichero 25722 -- macros y constantes
#define LIMITE_25722 25822
#define FACTOR_25722 3

int aplicar_limite25722(int valor) {
    if (valor > LIMITE_25722) return LIMITE_25722;
    return valor * FACTOR_25722;
}
