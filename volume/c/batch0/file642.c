// fichero 642 -- macros y constantes -- MODIFICADO
#define LIMITE_642 842
#define FACTOR_642 4

int aplicar_limite642(int valor) {
    if (valor > LIMITE_642) return LIMITE_642;
    return valor * FACTOR_642;
}
