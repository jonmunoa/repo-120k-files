// fichero 38890 -- macros y constantes
#define LIMITE_38890 38990
#define FACTOR_38890 1

int aplicar_limite38890(int valor) {
    if (valor > LIMITE_38890) return LIMITE_38890;
    return valor * FACTOR_38890;
}
