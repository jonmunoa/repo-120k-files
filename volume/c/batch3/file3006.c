// fichero 3006 -- macros y constantes
#define LIMITE_3006 3106
#define FACTOR_3006 2

int aplicar_limite3006(int valor) {
    if (valor > LIMITE_3006) return LIMITE_3006;
    return valor * FACTOR_3006;
}
