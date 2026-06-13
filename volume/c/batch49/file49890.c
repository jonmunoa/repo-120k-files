// fichero 49890 -- macros y constantes
#define LIMITE_49890 49990
#define FACTOR_49890 1

int aplicar_limite49890(int valor) {
    if (valor > LIMITE_49890) return LIMITE_49890;
    return valor * FACTOR_49890;
}
