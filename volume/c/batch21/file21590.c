// fichero 21590 -- macros y constantes
#define LIMITE_21590 21690
#define FACTOR_21590 1

int aplicar_limite21590(int valor) {
    if (valor > LIMITE_21590) return LIMITE_21590;
    return valor * FACTOR_21590;
}
