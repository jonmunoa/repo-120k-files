// fichero 18538 -- macros y constantes -- MODIFICADO
#define LIMITE_18538 18738
#define FACTOR_18538 5

int aplicar_limite18538(int valor) {
    if (valor > LIMITE_18538) return LIMITE_18538;
    return valor * FACTOR_18538;
}
