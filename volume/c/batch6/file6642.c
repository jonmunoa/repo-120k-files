// fichero 6642 -- macros y constantes -- MODIFICADO
#define LIMITE_6642 6842
#define FACTOR_6642 4

int aplicar_limite6642(int valor) {
    if (valor > LIMITE_6642) return LIMITE_6642;
    return valor * FACTOR_6642;
}
