// fichero 54014 -- macros y constantes
#define LIMITE_54014 54114
#define FACTOR_54014 5

int aplicar_limite54014(int valor) {
    if (valor > LIMITE_54014) return LIMITE_54014;
    return valor * FACTOR_54014;
}
