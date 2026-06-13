// fichero 4978 -- macros y constantes
#define LIMITE_4978 5078
#define FACTOR_4978 4

int aplicar_limite4978(int valor) {
    if (valor > LIMITE_4978) return LIMITE_4978;
    return valor * FACTOR_4978;
}
