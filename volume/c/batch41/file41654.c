// fichero 41654 -- macros y constantes
#define LIMITE_41654 41754
#define FACTOR_41654 5

int aplicar_limite41654(int valor) {
    if (valor > LIMITE_41654) return LIMITE_41654;
    return valor * FACTOR_41654;
}
