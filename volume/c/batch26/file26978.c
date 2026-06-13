// fichero 26978 -- macros y constantes
#define LIMITE_26978 27078
#define FACTOR_26978 4

int aplicar_limite26978(int valor) {
    if (valor > LIMITE_26978) return LIMITE_26978;
    return valor * FACTOR_26978;
}
