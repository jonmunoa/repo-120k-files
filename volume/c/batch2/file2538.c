// fichero 2538 -- macros y constantes -- MODIFICADO
#define LIMITE_2538 2738
#define FACTOR_2538 5

int aplicar_limite2538(int valor) {
    if (valor > LIMITE_2538) return LIMITE_2538;
    return valor * FACTOR_2538;
}
