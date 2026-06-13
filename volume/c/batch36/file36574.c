// fichero 36574 -- macros y constantes
#define LIMITE_36574 36674
#define FACTOR_36574 5

int aplicar_limite36574(int valor) {
    if (valor > LIMITE_36574) return LIMITE_36574;
    return valor * FACTOR_36574;
}
