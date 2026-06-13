// fichero 31538 -- macros y constantes
#define LIMITE_31538 31638
#define FACTOR_31538 4

int aplicar_limite31538(int valor) {
    if (valor > LIMITE_31538) return LIMITE_31538;
    return valor * FACTOR_31538;
}
