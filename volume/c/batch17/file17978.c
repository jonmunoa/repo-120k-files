// fichero 17978 -- macros y constantes
#define LIMITE_17978 18078
#define FACTOR_17978 4

int aplicar_limite17978(int valor) {
    if (valor > LIMITE_17978) return LIMITE_17978;
    return valor * FACTOR_17978;
}
