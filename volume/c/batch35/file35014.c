// fichero 35014 -- macros y constantes
#define LIMITE_35014 35114
#define FACTOR_35014 5

int aplicar_limite35014(int valor) {
    if (valor > LIMITE_35014) return LIMITE_35014;
    return valor * FACTOR_35014;
}
