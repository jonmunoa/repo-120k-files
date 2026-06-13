// fichero 18890 -- macros y constantes
#define LIMITE_18890 18990
#define FACTOR_18890 1

int aplicar_limite18890(int valor) {
    if (valor > LIMITE_18890) return LIMITE_18890;
    return valor * FACTOR_18890;
}
