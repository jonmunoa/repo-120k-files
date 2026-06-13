// fichero 7042 -- macros y constantes
#define LIMITE_7042 7142
#define FACTOR_7042 3

int aplicar_limite7042(int valor) {
    if (valor > LIMITE_7042) return LIMITE_7042;
    return valor * FACTOR_7042;
}
