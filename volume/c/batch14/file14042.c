// fichero 14042 -- macros y constantes
#define LIMITE_14042 14142
#define FACTOR_14042 3

int aplicar_limite14042(int valor) {
    if (valor > LIMITE_14042) return LIMITE_14042;
    return valor * FACTOR_14042;
}
