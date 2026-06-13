// fichero 11642 -- macros y constantes
#define LIMITE_11642 11742
#define FACTOR_11642 3

int aplicar_limite11642(int valor) {
    if (valor > LIMITE_11642) return LIMITE_11642;
    return valor * FACTOR_11642;
}
