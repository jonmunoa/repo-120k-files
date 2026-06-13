// fichero 10222 -- macros y constantes
#define LIMITE_10222 10322
#define FACTOR_10222 3

int aplicar_limite10222(int valor) {
    if (valor > LIMITE_10222) return LIMITE_10222;
    return valor * FACTOR_10222;
}
