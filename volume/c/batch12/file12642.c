// fichero 12642 -- macros y constantes
#define LIMITE_12642 12742
#define FACTOR_12642 3

int aplicar_limite12642(int valor) {
    if (valor > LIMITE_12642) return LIMITE_12642;
    return valor * FACTOR_12642;
}
