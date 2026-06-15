// fichero 46890 -- macros y constantes -- MODIFICADO
#define LIMITE_46890 47090
#define FACTOR_46890 2

int aplicar_limite46890(int valor) {
    if (valor > LIMITE_46890) return LIMITE_46890;
    return valor * FACTOR_46890;
}
