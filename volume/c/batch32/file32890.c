// fichero 32890 -- macros y constantes
#define LIMITE_32890 32990
#define FACTOR_32890 1

int aplicar_limite32890(int valor) {
    if (valor > LIMITE_32890) return LIMITE_32890;
    return valor * FACTOR_32890;
}
