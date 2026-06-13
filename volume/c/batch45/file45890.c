// fichero 45890 -- macros y constantes
#define LIMITE_45890 45990
#define FACTOR_45890 1

int aplicar_limite45890(int valor) {
    if (valor > LIMITE_45890) return LIMITE_45890;
    return valor * FACTOR_45890;
}
