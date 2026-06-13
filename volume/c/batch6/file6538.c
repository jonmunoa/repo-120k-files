// fichero 6538 -- macros y constantes
#define LIMITE_6538 6638
#define FACTOR_6538 4

int aplicar_limite6538(int valor) {
    if (valor > LIMITE_6538) return LIMITE_6538;
    return valor * FACTOR_6538;
}
