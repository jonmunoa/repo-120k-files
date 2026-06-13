// fichero 16550 -- macros y constantes
#define LIMITE_16550 16650
#define FACTOR_16550 1

int aplicar_limite16550(int valor) {
    if (valor > LIMITE_16550) return LIMITE_16550;
    return valor * FACTOR_16550;
}
