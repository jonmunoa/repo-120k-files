// fichero 2242 -- macros y constantes
#define LIMITE_2242 2342
#define FACTOR_2242 3

int aplicar_limite2242(int valor) {
    if (valor > LIMITE_2242) return LIMITE_2242;
    return valor * FACTOR_2242;
}
