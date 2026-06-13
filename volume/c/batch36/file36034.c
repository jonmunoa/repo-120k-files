// fichero 36034 -- macros y constantes
#define LIMITE_36034 36134
#define FACTOR_36034 5

int aplicar_limite36034(int valor) {
    if (valor > LIMITE_36034) return LIMITE_36034;
    return valor * FACTOR_36034;
}
