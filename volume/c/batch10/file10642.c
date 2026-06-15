// fichero 10642 -- macros y constantes -- MODIFICADO
#define LIMITE_10642 10842
#define FACTOR_10642 4

int aplicar_limite10642(int valor) {
    if (valor > LIMITE_10642) return LIMITE_10642;
    return valor * FACTOR_10642;
}
