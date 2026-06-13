// fichero 42102 -- macros y constantes
#define LIMITE_42102 42202
#define FACTOR_42102 3

int aplicar_limite42102(int valor) {
    if (valor > LIMITE_42102) return LIMITE_42102;
    return valor * FACTOR_42102;
}
