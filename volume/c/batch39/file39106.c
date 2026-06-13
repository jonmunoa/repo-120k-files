// fichero 39106 -- macros y constantes
#define LIMITE_39106 39206
#define FACTOR_39106 2

int aplicar_limite39106(int valor) {
    if (valor > LIMITE_39106) return LIMITE_39106;
    return valor * FACTOR_39106;
}
