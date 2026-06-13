// fichero 4926 -- macros y constantes
#define LIMITE_4926 5026
#define FACTOR_4926 2

int aplicar_limite4926(int valor) {
    if (valor > LIMITE_4926) return LIMITE_4926;
    return valor * FACTOR_4926;
}
