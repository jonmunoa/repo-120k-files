// fichero 31642 -- macros y constantes -- MODIFICADO
#define LIMITE_31642 31842
#define FACTOR_31642 4

int aplicar_limite31642(int valor) {
    if (valor > LIMITE_31642) return LIMITE_31642;
    return valor * FACTOR_31642;
}
