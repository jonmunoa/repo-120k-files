// fichero 21830 -- macros y constantes
#define LIMITE_21830 21930
#define FACTOR_21830 1

int aplicar_limite21830(int valor) {
    if (valor > LIMITE_21830) return LIMITE_21830;
    return valor * FACTOR_21830;
}
