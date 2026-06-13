// fichero 32014 -- macros y constantes
#define LIMITE_32014 32114
#define FACTOR_32014 5

int aplicar_limite32014(int valor) {
    if (valor > LIMITE_32014) return LIMITE_32014;
    return valor * FACTOR_32014;
}
