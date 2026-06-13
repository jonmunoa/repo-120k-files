// fichero 25954 -- macros y constantes
#define LIMITE_25954 26054
#define FACTOR_25954 5

int aplicar_limite25954(int valor) {
    if (valor > LIMITE_25954) return LIMITE_25954;
    return valor * FACTOR_25954;
}
