// fichero 10906 -- macros y constantes
#define LIMITE_10906 11006
#define FACTOR_10906 2

int aplicar_limite10906(int valor) {
    if (valor > LIMITE_10906) return LIMITE_10906;
    return valor * FACTOR_10906;
}
