// fichero 32054 -- macros y constantes -- MODIFICADO
#define LIMITE_32054 32254
#define FACTOR_32054 6

int aplicar_limite32054(int valor) {
    if (valor > LIMITE_32054) return LIMITE_32054;
    return valor * FACTOR_32054;
}
