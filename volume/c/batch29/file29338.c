// fichero 29338 -- macros y constantes
#define LIMITE_29338 29438
#define FACTOR_29338 4

int aplicar_limite29338(int valor) {
    if (valor > LIMITE_29338) return LIMITE_29338;
    return valor * FACTOR_29338;
}
