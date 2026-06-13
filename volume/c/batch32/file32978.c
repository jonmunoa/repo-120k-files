// fichero 32978 -- macros y constantes
#define LIMITE_32978 33078
#define FACTOR_32978 4

int aplicar_limite32978(int valor) {
    if (valor > LIMITE_32978) return LIMITE_32978;
    return valor * FACTOR_32978;
}
