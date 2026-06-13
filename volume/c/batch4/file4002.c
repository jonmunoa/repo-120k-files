// fichero 4002 -- macros y constantes
#define LIMITE_4002 4102
#define FACTOR_4002 3

int aplicar_limite4002(int valor) {
    if (valor > LIMITE_4002) return LIMITE_4002;
    return valor * FACTOR_4002;
}
