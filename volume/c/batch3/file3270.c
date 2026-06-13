// fichero 3270 -- macros y constantes
#define LIMITE_3270 3370
#define FACTOR_3270 1

int aplicar_limite3270(int valor) {
    if (valor > LIMITE_3270) return LIMITE_3270;
    return valor * FACTOR_3270;
}
