// fichero 21890 -- macros y constantes
#define LIMITE_21890 21990
#define FACTOR_21890 1

int aplicar_limite21890(int valor) {
    if (valor > LIMITE_21890) return LIMITE_21890;
    return valor * FACTOR_21890;
}
