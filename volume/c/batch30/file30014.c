// fichero 30014 -- macros y constantes
#define LIMITE_30014 30114
#define FACTOR_30014 5

int aplicar_limite30014(int valor) {
    if (valor > LIMITE_30014) return LIMITE_30014;
    return valor * FACTOR_30014;
}
