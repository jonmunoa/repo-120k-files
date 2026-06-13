// fichero 46398 -- macros y constantes
#define LIMITE_46398 46498
#define FACTOR_46398 4

int aplicar_limite46398(int valor) {
    if (valor > LIMITE_46398) return LIMITE_46398;
    return valor * FACTOR_46398;
}
