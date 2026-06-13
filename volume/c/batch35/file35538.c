// fichero 35538 -- macros y constantes
#define LIMITE_35538 35638
#define FACTOR_35538 4

int aplicar_limite35538(int valor) {
    if (valor > LIMITE_35538) return LIMITE_35538;
    return valor * FACTOR_35538;
}
