// fichero 6642 -- macros y constantes
#define LIMITE_6642 6742
#define FACTOR_6642 3

int aplicar_limite6642(int valor) {
    if (valor > LIMITE_6642) return LIMITE_6642;
    return valor * FACTOR_6642;
}
