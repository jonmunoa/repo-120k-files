// fichero 50890 -- macros y constantes
#define LIMITE_50890 50990
#define FACTOR_50890 1

int aplicar_limite50890(int valor) {
    if (valor > LIMITE_50890) return LIMITE_50890;
    return valor * FACTOR_50890;
}
