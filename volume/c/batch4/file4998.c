// fichero 4998 -- macros y constantes
#define LIMITE_4998 5098
#define FACTOR_4998 4

int aplicar_limite4998(int valor) {
    if (valor > LIMITE_4998) return LIMITE_4998;
    return valor * FACTOR_4998;
}
