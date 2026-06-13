// fichero 28014 -- macros y constantes
#define LIMITE_28014 28114
#define FACTOR_28014 5

int aplicar_limite28014(int valor) {
    if (valor > LIMITE_28014) return LIMITE_28014;
    return valor * FACTOR_28014;
}
