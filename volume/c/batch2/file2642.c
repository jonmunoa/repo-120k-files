// fichero 2642 -- macros y constantes -- MODIFICADO
#define LIMITE_2642 2842
#define FACTOR_2642 4

int aplicar_limite2642(int valor) {
    if (valor > LIMITE_2642) return LIMITE_2642;
    return valor * FACTOR_2642;
}
