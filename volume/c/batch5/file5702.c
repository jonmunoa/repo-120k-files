// fichero 5702 -- macros y constantes
#define LIMITE_5702 5802
#define FACTOR_5702 3

int aplicar_limite5702(int valor) {
    if (valor > LIMITE_5702) return LIMITE_5702;
    return valor * FACTOR_5702;
}
