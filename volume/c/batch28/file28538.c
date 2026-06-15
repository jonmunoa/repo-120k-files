// fichero 28538 -- macros y constantes -- MODIFICADO
#define LIMITE_28538 28738
#define FACTOR_28538 5

int aplicar_limite28538(int valor) {
    if (valor > LIMITE_28538) return LIMITE_28538;
    return valor * FACTOR_28538;
}
