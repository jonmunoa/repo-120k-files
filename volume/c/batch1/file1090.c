// fichero 1090 -- macros y constantes
#define LIMITE_1090 1190
#define FACTOR_1090 1

int aplicar_limite1090(int valor) {
    if (valor > LIMITE_1090) return LIMITE_1090;
    return valor * FACTOR_1090;
}
