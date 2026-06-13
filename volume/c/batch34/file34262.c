// fichero 34262 -- macros y constantes
#define LIMITE_34262 34362
#define FACTOR_34262 3

int aplicar_limite34262(int valor) {
    if (valor > LIMITE_34262) return LIMITE_34262;
    return valor * FACTOR_34262;
}
