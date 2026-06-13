// fichero 42518 -- macros y constantes
#define LIMITE_42518 42618
#define FACTOR_42518 4

int aplicar_limite42518(int valor) {
    if (valor > LIMITE_42518) return LIMITE_42518;
    return valor * FACTOR_42518;
}
