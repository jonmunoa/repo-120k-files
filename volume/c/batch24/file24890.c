// fichero 24890 -- macros y constantes
#define LIMITE_24890 24990
#define FACTOR_24890 1

int aplicar_limite24890(int valor) {
    if (valor > LIMITE_24890) return LIMITE_24890;
    return valor * FACTOR_24890;
}
