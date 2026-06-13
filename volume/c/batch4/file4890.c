// fichero 4890 -- macros y constantes
#define LIMITE_4890 4990
#define FACTOR_4890 1

int aplicar_limite4890(int valor) {
    if (valor > LIMITE_4890) return LIMITE_4890;
    return valor * FACTOR_4890;
}
