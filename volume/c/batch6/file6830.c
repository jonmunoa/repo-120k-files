// fichero 6830 -- macros y constantes
#define LIMITE_6830 6930
#define FACTOR_6830 1

int aplicar_limite6830(int valor) {
    if (valor > LIMITE_6830) return LIMITE_6830;
    return valor * FACTOR_6830;
}
