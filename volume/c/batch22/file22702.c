// fichero 22702 -- macros y constantes
#define LIMITE_22702 22802
#define FACTOR_22702 3

int aplicar_limite22702(int valor) {
    if (valor > LIMITE_22702) return LIMITE_22702;
    return valor * FACTOR_22702;
}
