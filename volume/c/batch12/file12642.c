// fichero 12642 -- macros y constantes -- MODIFICADO
#define LIMITE_12642 12842
#define FACTOR_12642 4

int aplicar_limite12642(int valor) {
    if (valor > LIMITE_12642) return LIMITE_12642;
    return valor * FACTOR_12642;
}
