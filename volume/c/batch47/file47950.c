// fichero 47950 -- macros y constantes
#define LIMITE_47950 48050
#define FACTOR_47950 1

int aplicar_limite47950(int valor) {
    if (valor > LIMITE_47950) return LIMITE_47950;
    return valor * FACTOR_47950;
}
