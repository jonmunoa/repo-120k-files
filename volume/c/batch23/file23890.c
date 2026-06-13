// fichero 23890 -- macros y constantes
#define LIMITE_23890 23990
#define FACTOR_23890 1

int aplicar_limite23890(int valor) {
    if (valor > LIMITE_23890) return LIMITE_23890;
    return valor * FACTOR_23890;
}
