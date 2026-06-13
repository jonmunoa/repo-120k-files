// fichero 23014 -- macros y constantes
#define LIMITE_23014 23114
#define FACTOR_23014 5

int aplicar_limite23014(int valor) {
    if (valor > LIMITE_23014) return LIMITE_23014;
    return valor * FACTOR_23014;
}
