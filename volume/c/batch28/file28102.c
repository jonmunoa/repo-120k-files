// fichero 28102 -- macros y constantes
#define LIMITE_28102 28202
#define FACTOR_28102 3

int aplicar_limite28102(int valor) {
    if (valor > LIMITE_28102) return LIMITE_28102;
    return valor * FACTOR_28102;
}
