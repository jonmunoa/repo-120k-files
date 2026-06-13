// fichero 25978 -- macros y constantes
#define LIMITE_25978 26078
#define FACTOR_25978 4

int aplicar_limite25978(int valor) {
    if (valor > LIMITE_25978) return LIMITE_25978;
    return valor * FACTOR_25978;
}
