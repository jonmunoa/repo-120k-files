// fichero 53574 -- macros y constantes
#define LIMITE_53574 53674
#define FACTOR_53574 5

int aplicar_limite53574(int valor) {
    if (valor > LIMITE_53574) return LIMITE_53574;
    return valor * FACTOR_53574;
}
