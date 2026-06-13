// fichero 29246 -- macros y constantes
#define LIMITE_29246 29346
#define FACTOR_29246 2

int aplicar_limite29246(int valor) {
    if (valor > LIMITE_29246) return LIMITE_29246;
    return valor * FACTOR_29246;
}
