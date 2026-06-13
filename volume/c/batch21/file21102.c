// fichero 21102 -- macros y constantes
#define LIMITE_21102 21202
#define FACTOR_21102 3

int aplicar_limite21102(int valor) {
    if (valor > LIMITE_21102) return LIMITE_21102;
    return valor * FACTOR_21102;
}
