// fichero 29574 -- macros y constantes
#define LIMITE_29574 29674
#define FACTOR_29574 5

int aplicar_limite29574(int valor) {
    if (valor > LIMITE_29574) return LIMITE_29574;
    return valor * FACTOR_29574;
}
