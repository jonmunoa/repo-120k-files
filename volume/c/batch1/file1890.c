// fichero 1890 -- macros y constantes
#define LIMITE_1890 1990
#define FACTOR_1890 1

int aplicar_limite1890(int valor) {
    if (valor > LIMITE_1890) return LIMITE_1890;
    return valor * FACTOR_1890;
}
