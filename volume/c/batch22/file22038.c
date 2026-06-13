// fichero 22038 -- macros y constantes
#define LIMITE_22038 22138
#define FACTOR_22038 4

int aplicar_limite22038(int valor) {
    if (valor > LIMITE_22038) return LIMITE_22038;
    return valor * FACTOR_22038;
}
