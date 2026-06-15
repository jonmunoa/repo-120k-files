// fichero 36642 -- macros y constantes -- MODIFICADO
#define LIMITE_36642 36842
#define FACTOR_36642 4

int aplicar_limite36642(int valor) {
    if (valor > LIMITE_36642) return LIMITE_36642;
    return valor * FACTOR_36642;
}
