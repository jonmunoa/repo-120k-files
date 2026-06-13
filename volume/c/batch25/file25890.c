// fichero 25890 -- macros y constantes
#define LIMITE_25890 25990
#define FACTOR_25890 1

int aplicar_limite25890(int valor) {
    if (valor > LIMITE_25890) return LIMITE_25890;
    return valor * FACTOR_25890;
}
