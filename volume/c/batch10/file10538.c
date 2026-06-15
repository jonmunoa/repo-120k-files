// fichero 10538 -- macros y constantes -- MODIFICADO
#define LIMITE_10538 10738
#define FACTOR_10538 5

int aplicar_limite10538(int valor) {
    if (valor > LIMITE_10538) return LIMITE_10538;
    return valor * FACTOR_10538;
}
