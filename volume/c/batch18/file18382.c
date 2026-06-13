// fichero 18382 -- macros y constantes
#define LIMITE_18382 18482
#define FACTOR_18382 3

int aplicar_limite18382(int valor) {
    if (valor > LIMITE_18382) return LIMITE_18382;
    return valor * FACTOR_18382;
}
