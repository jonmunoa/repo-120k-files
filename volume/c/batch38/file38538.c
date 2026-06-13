// fichero 38538 -- macros y constantes
#define LIMITE_38538 38638
#define FACTOR_38538 4

int aplicar_limite38538(int valor) {
    if (valor > LIMITE_38538) return LIMITE_38538;
    return valor * FACTOR_38538;
}
