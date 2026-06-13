// fichero 39890 -- macros y constantes
#define LIMITE_39890 39990
#define FACTOR_39890 1

int aplicar_limite39890(int valor) {
    if (valor > LIMITE_39890) return LIMITE_39890;
    return valor * FACTOR_39890;
}
