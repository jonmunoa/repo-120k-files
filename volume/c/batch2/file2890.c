// fichero 2890 -- macros y constantes
#define LIMITE_2890 2990
#define FACTOR_2890 1

int aplicar_limite2890(int valor) {
    if (valor > LIMITE_2890) return LIMITE_2890;
    return valor * FACTOR_2890;
}
