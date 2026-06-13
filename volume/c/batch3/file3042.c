// fichero 3042 -- macros y constantes
#define LIMITE_3042 3142
#define FACTOR_3042 3

int aplicar_limite3042(int valor) {
    if (valor > LIMITE_3042) return LIMITE_3042;
    return valor * FACTOR_3042;
}
