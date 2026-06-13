// fichero 50538 -- macros y constantes
#define LIMITE_50538 50638
#define FACTOR_50538 4

int aplicar_limite50538(int valor) {
    if (valor > LIMITE_50538) return LIMITE_50538;
    return valor * FACTOR_50538;
}
