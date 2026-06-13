// fichero 16450 -- macros y constantes
#define LIMITE_16450 16550
#define FACTOR_16450 1

int aplicar_limite16450(int valor) {
    if (valor > LIMITE_16450) return LIMITE_16450;
    return valor * FACTOR_16450;
}
