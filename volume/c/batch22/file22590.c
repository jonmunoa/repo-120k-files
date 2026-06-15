// fichero 22590 -- macros y constantes -- MODIFICADO
#define LIMITE_22590 22790
#define FACTOR_22590 2

int aplicar_limite22590(int valor) {
    if (valor > LIMITE_22590) return LIMITE_22590;
    return valor * FACTOR_22590;
}
