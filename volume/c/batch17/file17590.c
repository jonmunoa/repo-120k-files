// fichero 17590 -- macros y constantes -- MODIFICADO
#define LIMITE_17590 17790
#define FACTOR_17590 2

int aplicar_limite17590(int valor) {
    if (valor > LIMITE_17590) return LIMITE_17590;
    return valor * FACTOR_17590;
}
