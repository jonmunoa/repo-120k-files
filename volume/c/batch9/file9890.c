// fichero 9890 -- macros y constantes
#define LIMITE_9890 9990
#define FACTOR_9890 1

int aplicar_limite9890(int valor) {
    if (valor > LIMITE_9890) return LIMITE_9890;
    return valor * FACTOR_9890;
}
