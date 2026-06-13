// fichero 27722 -- macros y constantes
#define LIMITE_27722 27822
#define FACTOR_27722 3

int aplicar_limite27722(int valor) {
    if (valor > LIMITE_27722) return LIMITE_27722;
    return valor * FACTOR_27722;
}
