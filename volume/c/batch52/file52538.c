// fichero 52538 -- macros y constantes
#define LIMITE_52538 52638
#define FACTOR_52538 4

int aplicar_limite52538(int valor) {
    if (valor > LIMITE_52538) return LIMITE_52538;
    return valor * FACTOR_52538;
}
