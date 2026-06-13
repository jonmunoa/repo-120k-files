// fichero 18242 -- macros y constantes
#define LIMITE_18242 18342
#define FACTOR_18242 3

int aplicar_limite18242(int valor) {
    if (valor > LIMITE_18242) return LIMITE_18242;
    return valor * FACTOR_18242;
}
