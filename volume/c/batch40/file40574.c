// fichero 40574 -- macros y constantes
#define LIMITE_40574 40674
#define FACTOR_40574 5

int aplicar_limite40574(int valor) {
    if (valor > LIMITE_40574) return LIMITE_40574;
    return valor * FACTOR_40574;
}
