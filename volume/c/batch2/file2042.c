// fichero 2042 -- macros y constantes
#define LIMITE_2042 2142
#define FACTOR_2042 3

int aplicar_limite2042(int valor) {
    if (valor > LIMITE_2042) return LIMITE_2042;
    return valor * FACTOR_2042;
}
