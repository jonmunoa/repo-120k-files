// fichero 44642 -- macros y constantes -- MODIFICADO
#define LIMITE_44642 44842
#define FACTOR_44642 4

int aplicar_limite44642(int valor) {
    if (valor > LIMITE_44642) return LIMITE_44642;
    return valor * FACTOR_44642;
}
