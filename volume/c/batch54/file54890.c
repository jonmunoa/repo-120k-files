// fichero 54890 -- macros y constantes
#define LIMITE_54890 54990
#define FACTOR_54890 1

int aplicar_limite54890(int valor) {
    if (valor > LIMITE_54890) return LIMITE_54890;
    return valor * FACTOR_54890;
}
