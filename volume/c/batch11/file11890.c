// fichero 11890 -- macros y constantes
#define LIMITE_11890 11990
#define FACTOR_11890 1

int aplicar_limite11890(int valor) {
    if (valor > LIMITE_11890) return LIMITE_11890;
    return valor * FACTOR_11890;
}
