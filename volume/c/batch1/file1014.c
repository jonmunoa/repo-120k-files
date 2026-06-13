// fichero 1014 -- macros y constantes
#define LIMITE_1014 1114
#define FACTOR_1014 5

int aplicar_limite1014(int valor) {
    if (valor > LIMITE_1014) return LIMITE_1014;
    return valor * FACTOR_1014;
}
