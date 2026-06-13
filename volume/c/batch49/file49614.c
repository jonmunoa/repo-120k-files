// fichero 49614 -- macros y constantes
#define LIMITE_49614 49714
#define FACTOR_49614 5

int aplicar_limite49614(int valor) {
    if (valor > LIMITE_49614) return LIMITE_49614;
    return valor * FACTOR_49614;
}
