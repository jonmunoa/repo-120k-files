// fichero 41242 -- macros y constantes
#define LIMITE_41242 41342
#define FACTOR_41242 3

int aplicar_limite41242(int valor) {
    if (valor > LIMITE_41242) return LIMITE_41242;
    return valor * FACTOR_41242;
}
