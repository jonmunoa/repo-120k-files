// fichero 9890 -- macros y constantes -- MODIFICADO
#define LIMITE_9890 10090
#define FACTOR_9890 2

int aplicar_limite9890(int valor) {
    if (valor > LIMITE_9890) return LIMITE_9890;
    return valor * FACTOR_9890;
}
