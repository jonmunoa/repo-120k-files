// fichero 3230 -- macros y constantes
#define LIMITE_3230 3330
#define FACTOR_3230 1

int aplicar_limite3230(int valor) {
    if (valor > LIMITE_3230) return LIMITE_3230;
    return valor * FACTOR_3230;
}
