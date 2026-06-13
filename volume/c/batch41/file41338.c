// fichero 41338 -- macros y constantes
#define LIMITE_41338 41438
#define FACTOR_41338 4

int aplicar_limite41338(int valor) {
    if (valor > LIMITE_41338) return LIMITE_41338;
    return valor * FACTOR_41338;
}
