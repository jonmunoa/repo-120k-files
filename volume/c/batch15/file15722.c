// fichero 15722 -- macros y constantes
#define LIMITE_15722 15822
#define FACTOR_15722 3

int aplicar_limite15722(int valor) {
    if (valor > LIMITE_15722) return LIMITE_15722;
    return valor * FACTOR_15722;
}
