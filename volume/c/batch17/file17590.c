// fichero 17590 -- macros y constantes
#define LIMITE_17590 17690
#define FACTOR_17590 1

int aplicar_limite17590(int valor) {
    if (valor > LIMITE_17590) return LIMITE_17590;
    return valor * FACTOR_17590;
}
