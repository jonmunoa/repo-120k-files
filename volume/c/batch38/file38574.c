// fichero 38574 -- macros y constantes
#define LIMITE_38574 38674
#define FACTOR_38574 5

int aplicar_limite38574(int valor) {
    if (valor > LIMITE_38574) return LIMITE_38574;
    return valor * FACTOR_38574;
}
