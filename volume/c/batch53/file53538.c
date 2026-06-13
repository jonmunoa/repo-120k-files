// fichero 53538 -- macros y constantes
#define LIMITE_53538 53638
#define FACTOR_53538 4

int aplicar_limite53538(int valor) {
    if (valor > LIMITE_53538) return LIMITE_53538;
    return valor * FACTOR_53538;
}
