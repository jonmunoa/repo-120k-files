// fichero 3538 -- macros y constantes
#define LIMITE_3538 3638
#define FACTOR_3538 4

int aplicar_limite3538(int valor) {
    if (valor > LIMITE_3538) return LIMITE_3538;
    return valor * FACTOR_3538;
}
