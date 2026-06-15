// fichero 23642 -- macros y constantes -- MODIFICADO
#define LIMITE_23642 23842
#define FACTOR_23642 4

int aplicar_limite23642(int valor) {
    if (valor > LIMITE_23642) return LIMITE_23642;
    return valor * FACTOR_23642;
}
