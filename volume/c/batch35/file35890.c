// fichero 35890 -- macros y constantes
#define LIMITE_35890 35990
#define FACTOR_35890 1

int aplicar_limite35890(int valor) {
    if (valor > LIMITE_35890) return LIMITE_35890;
    return valor * FACTOR_35890;
}
