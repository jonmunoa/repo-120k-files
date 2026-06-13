// fichero 13890 -- macros y constantes
#define LIMITE_13890 13990
#define FACTOR_13890 1

int aplicar_limite13890(int valor) {
    if (valor > LIMITE_13890) return LIMITE_13890;
    return valor * FACTOR_13890;
}
