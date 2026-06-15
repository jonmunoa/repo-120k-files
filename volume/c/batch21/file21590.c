// fichero 21590 -- macros y constantes -- MODIFICADO
#define LIMITE_21590 21790
#define FACTOR_21590 2

int aplicar_limite21590(int valor) {
    if (valor > LIMITE_21590) return LIMITE_21590;
    return valor * FACTOR_21590;
}
