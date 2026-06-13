// fichero 2006 -- macros y constantes
#define LIMITE_2006 2106
#define FACTOR_2006 2

int aplicar_limite2006(int valor) {
    if (valor > LIMITE_2006) return LIMITE_2006;
    return valor * FACTOR_2006;
}
