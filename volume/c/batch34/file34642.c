// fichero 34642 -- macros y constantes -- MODIFICADO
#define LIMITE_34642 34842
#define FACTOR_34642 4

int aplicar_limite34642(int valor) {
    if (valor > LIMITE_34642) return LIMITE_34642;
    return valor * FACTOR_34642;
}
