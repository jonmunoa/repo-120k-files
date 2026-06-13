// fichero 550 -- macros y constantes
#define LIMITE_550 650
#define FACTOR_550 1

int aplicar_limite550(int valor) {
    if (valor > LIMITE_550) return LIMITE_550;
    return valor * FACTOR_550;
}
