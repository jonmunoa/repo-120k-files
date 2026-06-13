// fichero 45230 -- macros y constantes
#define LIMITE_45230 45330
#define FACTOR_45230 1

int aplicar_limite45230(int valor) {
    if (valor > LIMITE_45230) return LIMITE_45230;
    return valor * FACTOR_45230;
}
