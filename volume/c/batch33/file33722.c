// fichero 33722 -- macros y constantes
#define LIMITE_33722 33822
#define FACTOR_33722 3

int aplicar_limite33722(int valor) {
    if (valor > LIMITE_33722) return LIMITE_33722;
    return valor * FACTOR_33722;
}
