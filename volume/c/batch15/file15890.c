// fichero 15890 -- macros y constantes
#define LIMITE_15890 15990
#define FACTOR_15890 1

int aplicar_limite15890(int valor) {
    if (valor > LIMITE_15890) return LIMITE_15890;
    return valor * FACTOR_15890;
}
