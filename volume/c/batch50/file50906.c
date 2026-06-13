// fichero 50906 -- macros y constantes
#define LIMITE_50906 51006
#define FACTOR_50906 2

int aplicar_limite50906(int valor) {
    if (valor > LIMITE_50906) return LIMITE_50906;
    return valor * FACTOR_50906;
}
