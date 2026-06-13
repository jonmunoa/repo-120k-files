// fichero 30906 -- macros y constantes
#define LIMITE_30906 31006
#define FACTOR_30906 2

int aplicar_limite30906(int valor) {
    if (valor > LIMITE_30906) return LIMITE_30906;
    return valor * FACTOR_30906;
}
