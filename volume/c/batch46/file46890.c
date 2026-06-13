// fichero 46890 -- macros y constantes
#define LIMITE_46890 46990
#define FACTOR_46890 1

int aplicar_limite46890(int valor) {
    if (valor > LIMITE_46890) return LIMITE_46890;
    return valor * FACTOR_46890;
}
