// fichero 46538 -- macros y constantes
#define LIMITE_46538 46638
#define FACTOR_46538 4

int aplicar_limite46538(int valor) {
    if (valor > LIMITE_46538) return LIMITE_46538;
    return valor * FACTOR_46538;
}
