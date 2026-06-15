// fichero 550 -- macros y constantes -- MODIFICADO
#define LIMITE_550 750
#define FACTOR_550 2

int aplicar_limite550(int valor) {
    if (valor > LIMITE_550) return LIMITE_550;
    return valor * FACTOR_550;
}
