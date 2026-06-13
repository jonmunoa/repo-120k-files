// fichero 38438 -- macros y constantes
#define LIMITE_38438 38538
#define FACTOR_38438 4

int aplicar_limite38438(int valor) {
    if (valor > LIMITE_38438) return LIMITE_38438;
    return valor * FACTOR_38438;
}
