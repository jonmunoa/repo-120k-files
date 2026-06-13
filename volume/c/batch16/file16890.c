// fichero 16890 -- macros y constantes
#define LIMITE_16890 16990
#define FACTOR_16890 1

int aplicar_limite16890(int valor) {
    if (valor > LIMITE_16890) return LIMITE_16890;
    return valor * FACTOR_16890;
}
