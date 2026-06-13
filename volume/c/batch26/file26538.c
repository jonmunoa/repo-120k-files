// fichero 26538 -- macros y constantes
#define LIMITE_26538 26638
#define FACTOR_26538 4

int aplicar_limite26538(int valor) {
    if (valor > LIMITE_26538) return LIMITE_26538;
    return valor * FACTOR_26538;
}
