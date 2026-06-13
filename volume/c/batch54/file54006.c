// fichero 54006 -- macros y constantes
#define LIMITE_54006 54106
#define FACTOR_54006 2

int aplicar_limite54006(int valor) {
    if (valor > LIMITE_54006) return LIMITE_54006;
    return valor * FACTOR_54006;
}
