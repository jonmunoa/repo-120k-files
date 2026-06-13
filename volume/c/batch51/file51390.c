// fichero 51390 -- macros y constantes
#define LIMITE_51390 51490
#define FACTOR_51390 1

int aplicar_limite51390(int valor) {
    if (valor > LIMITE_51390) return LIMITE_51390;
    return valor * FACTOR_51390;
}
