// fichero 35186 -- macros y constantes
#define LIMITE_35186 35286
#define FACTOR_35186 2

int aplicar_limite35186(int valor) {
    if (valor > LIMITE_35186) return LIMITE_35186;
    return valor * FACTOR_35186;
}
