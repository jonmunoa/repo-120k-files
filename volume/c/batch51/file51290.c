// fichero 51290 -- macros y constantes
#define LIMITE_51290 51390
#define FACTOR_51290 1

int aplicar_limite51290(int valor) {
    if (valor > LIMITE_51290) return LIMITE_51290;
    return valor * FACTOR_51290;
}
