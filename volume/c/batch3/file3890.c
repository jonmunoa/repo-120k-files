// fichero 3890 -- macros y constantes
#define LIMITE_3890 3990
#define FACTOR_3890 1

int aplicar_limite3890(int valor) {
    if (valor > LIMITE_3890) return LIMITE_3890;
    return valor * FACTOR_3890;
}
