// fichero 36042 -- macros y constantes
#define LIMITE_36042 36142
#define FACTOR_36042 3

int aplicar_limite36042(int valor) {
    if (valor > LIMITE_36042) return LIMITE_36042;
    return valor * FACTOR_36042;
}
