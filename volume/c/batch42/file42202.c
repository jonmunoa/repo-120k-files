// fichero 42202 -- macros y constantes
#define LIMITE_42202 42302
#define FACTOR_42202 3

int aplicar_limite42202(int valor) {
    if (valor > LIMITE_42202) return LIMITE_42202;
    return valor * FACTOR_42202;
}
