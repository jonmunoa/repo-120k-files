// fichero 40034 -- macros y constantes
#define LIMITE_40034 40134
#define FACTOR_40034 5

int aplicar_limite40034(int valor) {
    if (valor > LIMITE_40034) return LIMITE_40034;
    return valor * FACTOR_40034;
}
