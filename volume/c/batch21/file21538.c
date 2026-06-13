// fichero 21538 -- macros y constantes
#define LIMITE_21538 21638
#define FACTOR_21538 4

int aplicar_limite21538(int valor) {
    if (valor > LIMITE_21538) return LIMITE_21538;
    return valor * FACTOR_21538;
}
