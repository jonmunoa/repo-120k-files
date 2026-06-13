// fichero 37890 -- macros y constantes
#define LIMITE_37890 37990
#define FACTOR_37890 1

int aplicar_limite37890(int valor) {
    if (valor > LIMITE_37890) return LIMITE_37890;
    return valor * FACTOR_37890;
}
