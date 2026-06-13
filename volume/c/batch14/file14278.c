// fichero 14278 -- macros y constantes
#define LIMITE_14278 14378
#define FACTOR_14278 4

int aplicar_limite14278(int valor) {
    if (valor > LIMITE_14278) return LIMITE_14278;
    return valor * FACTOR_14278;
}
