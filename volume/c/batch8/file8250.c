// fichero 8250 -- macros y constantes
#define LIMITE_8250 8350
#define FACTOR_8250 1

int aplicar_limite8250(int valor) {
    if (valor > LIMITE_8250) return LIMITE_8250;
    return valor * FACTOR_8250;
}
