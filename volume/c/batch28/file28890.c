// fichero 28890 -- macros y constantes
#define LIMITE_28890 28990
#define FACTOR_28890 1

int aplicar_limite28890(int valor) {
    if (valor > LIMITE_28890) return LIMITE_28890;
    return valor * FACTOR_28890;
}
