// fichero 42518 -- macros y constantes -- MODIFICADO
#define LIMITE_42518 42718
#define FACTOR_42518 5

int aplicar_limite42518(int valor) {
    if (valor > LIMITE_42518) return LIMITE_42518;
    return valor * FACTOR_42518;
}
