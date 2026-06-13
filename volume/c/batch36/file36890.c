// fichero 36890 -- macros y constantes
#define LIMITE_36890 36990
#define FACTOR_36890 1

int aplicar_limite36890(int valor) {
    if (valor > LIMITE_36890) return LIMITE_36890;
    return valor * FACTOR_36890;
}
