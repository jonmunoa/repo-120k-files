// fichero 11642 -- macros y constantes -- MODIFICADO
#define LIMITE_11642 11842
#define FACTOR_11642 4

int aplicar_limite11642(int valor) {
    if (valor > LIMITE_11642) return LIMITE_11642;
    return valor * FACTOR_11642;
}
