// fichero 14890 -- macros y constantes
#define LIMITE_14890 14990
#define FACTOR_14890 1

int aplicar_limite14890(int valor) {
    if (valor > LIMITE_14890) return LIMITE_14890;
    return valor * FACTOR_14890;
}
