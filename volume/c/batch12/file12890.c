// fichero 12890 -- macros y constantes
#define LIMITE_12890 12990
#define FACTOR_12890 1

int aplicar_limite12890(int valor) {
    if (valor > LIMITE_12890) return LIMITE_12890;
    return valor * FACTOR_12890;
}
