// fichero 26722 -- macros y constantes
#define LIMITE_26722 26822
#define FACTOR_26722 3

int aplicar_limite26722(int valor) {
    if (valor > LIMITE_26722) return LIMITE_26722;
    return valor * FACTOR_26722;
}
