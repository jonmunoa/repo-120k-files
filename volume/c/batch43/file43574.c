// fichero 43574 -- macros y constantes
#define LIMITE_43574 43674
#define FACTOR_43574 5

int aplicar_limite43574(int valor) {
    if (valor > LIMITE_43574) return LIMITE_43574;
    return valor * FACTOR_43574;
}
