// fichero 51890 -- macros y constantes
#define LIMITE_51890 51990
#define FACTOR_51890 1

int aplicar_limite51890(int valor) {
    if (valor > LIMITE_51890) return LIMITE_51890;
    return valor * FACTOR_51890;
}
