// fichero 33242 -- macros y constantes
#define LIMITE_33242 33342
#define FACTOR_33242 3

int aplicar_limite33242(int valor) {
    if (valor > LIMITE_33242) return LIMITE_33242;
    return valor * FACTOR_33242;
}
