// fichero 32054 -- macros y constantes
#define LIMITE_32054 32154
#define FACTOR_32054 5

int aplicar_limite32054(int valor) {
    if (valor > LIMITE_32054) return LIMITE_32054;
    return valor * FACTOR_32054;
}
