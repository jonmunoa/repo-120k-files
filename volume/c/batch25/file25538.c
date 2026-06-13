// fichero 25538 -- macros y constantes
#define LIMITE_25538 25638
#define FACTOR_25538 4

int aplicar_limite25538(int valor) {
    if (valor > LIMITE_25538) return LIMITE_25538;
    return valor * FACTOR_25538;
}
