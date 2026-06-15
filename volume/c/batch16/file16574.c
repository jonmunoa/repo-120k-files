// fichero 16574 -- macros y constantes -- MODIFICADO
#define LIMITE_16574 16774
#define FACTOR_16574 6

int aplicar_limite16574(int valor) {
    if (valor > LIMITE_16574) return LIMITE_16574;
    return valor * FACTOR_16574;
}
