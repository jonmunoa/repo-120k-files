// fichero 1642 -- macros y constantes -- MODIFICADO
#define LIMITE_1642 1842
#define FACTOR_1642 4

int aplicar_limite1642(int valor) {
    if (valor > LIMITE_1642) return LIMITE_1642;
    return valor * FACTOR_1642;
}
