// fichero 4102 -- macros y constantes
#define LIMITE_4102 4202
#define FACTOR_4102 3

int aplicar_limite4102(int valor) {
    if (valor > LIMITE_4102) return LIMITE_4102;
    return valor * FACTOR_4102;
}
