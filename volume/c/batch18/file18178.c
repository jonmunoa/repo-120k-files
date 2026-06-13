// fichero 18178 -- macros y constantes
#define LIMITE_18178 18278
#define FACTOR_18178 4

int aplicar_limite18178(int valor) {
    if (valor > LIMITE_18178) return LIMITE_18178;
    return valor * FACTOR_18178;
}
