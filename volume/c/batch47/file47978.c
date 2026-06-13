// fichero 47978 -- macros y constantes
#define LIMITE_47978 48078
#define FACTOR_47978 4

int aplicar_limite47978(int valor) {
    if (valor > LIMITE_47978) return LIMITE_47978;
    return valor * FACTOR_47978;
}
