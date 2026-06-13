// fichero 42890 -- macros y constantes
#define LIMITE_42890 42990
#define FACTOR_42890 1

int aplicar_limite42890(int valor) {
    if (valor > LIMITE_42890) return LIMITE_42890;
    return valor * FACTOR_42890;
}
