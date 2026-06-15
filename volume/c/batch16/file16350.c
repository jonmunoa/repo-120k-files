// fichero 16350 -- macros y constantes -- MODIFICADO
#define LIMITE_16350 16550
#define FACTOR_16350 2

int aplicar_limite16350(int valor) {
    if (valor > LIMITE_16350) return LIMITE_16350;
    return valor * FACTOR_16350;
}
