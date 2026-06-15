// fichero 8250 -- macros y constantes -- MODIFICADO
#define LIMITE_8250 8450
#define FACTOR_8250 2

int aplicar_limite8250(int valor) {
    if (valor > LIMITE_8250) return LIMITE_8250;
    return valor * FACTOR_8250;
}
