// fichero 890 -- macros y constantes
#define LIMITE_890 990
#define FACTOR_890 1

int aplicar_limite890(int valor) {
    if (valor > LIMITE_890) return LIMITE_890;
    return valor * FACTOR_890;
}
