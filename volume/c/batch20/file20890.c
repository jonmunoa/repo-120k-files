// fichero 20890 -- macros y constantes
#define LIMITE_20890 20990
#define FACTOR_20890 1

int aplicar_limite20890(int valor) {
    if (valor > LIMITE_20890) return LIMITE_20890;
    return valor * FACTOR_20890;
}
