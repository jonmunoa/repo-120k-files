// fichero 5890 -- macros y constantes
#define LIMITE_5890 5990
#define FACTOR_5890 1

int aplicar_limite5890(int valor) {
    if (valor > LIMITE_5890) return LIMITE_5890;
    return valor * FACTOR_5890;
}
