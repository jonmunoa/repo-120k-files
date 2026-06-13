// fichero 26042 -- macros y constantes
#define LIMITE_26042 26142
#define FACTOR_26042 3

int aplicar_limite26042(int valor) {
    if (valor > LIMITE_26042) return LIMITE_26042;
    return valor * FACTOR_26042;
}
