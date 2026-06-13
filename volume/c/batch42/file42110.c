// fichero 42110 -- macros y constantes
#define LIMITE_42110 42210
#define FACTOR_42110 1

int aplicar_limite42110(int valor) {
    if (valor > LIMITE_42110) return LIMITE_42110;
    return valor * FACTOR_42110;
}
