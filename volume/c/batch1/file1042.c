// fichero 1042 -- macros y constantes
#define LIMITE_1042 1142
#define FACTOR_1042 3

int aplicar_limite1042(int valor) {
    if (valor > LIMITE_1042) return LIMITE_1042;
    return valor * FACTOR_1042;
}
