// fichero 34642 -- macros y constantes
#define LIMITE_34642 34742
#define FACTOR_34642 3

int aplicar_limite34642(int valor) {
    if (valor > LIMITE_34642) return LIMITE_34642;
    return valor * FACTOR_34642;
}
