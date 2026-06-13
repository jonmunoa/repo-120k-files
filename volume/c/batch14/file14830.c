// fichero 14830 -- macros y constantes
#define LIMITE_14830 14930
#define FACTOR_14830 1

int aplicar_limite14830(int valor) {
    if (valor > LIMITE_14830) return LIMITE_14830;
    return valor * FACTOR_14830;
}
