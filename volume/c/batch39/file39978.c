// fichero 39978 -- macros y constantes
#define LIMITE_39978 40078
#define FACTOR_39978 4

int aplicar_limite39978(int valor) {
    if (valor > LIMITE_39978) return LIMITE_39978;
    return valor * FACTOR_39978;
}
