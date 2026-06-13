// fichero 24538 -- macros y constantes
#define LIMITE_24538 24638
#define FACTOR_24538 4

int aplicar_limite24538(int valor) {
    if (valor > LIMITE_24538) return LIMITE_24538;
    return valor * FACTOR_24538;
}
