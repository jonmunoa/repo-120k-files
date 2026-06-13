// fichero 32178 -- macros y constantes
#define LIMITE_32178 32278
#define FACTOR_32178 4

int aplicar_limite32178(int valor) {
    if (valor > LIMITE_32178) return LIMITE_32178;
    return valor * FACTOR_32178;
}
