// fichero 7590 -- macros y constantes -- MODIFICADO
#define LIMITE_7590 7790
#define FACTOR_7590 2

int aplicar_limite7590(int valor) {
    if (valor > LIMITE_7590) return LIMITE_7590;
    return valor * FACTOR_7590;
}
