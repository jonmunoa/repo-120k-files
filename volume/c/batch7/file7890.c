// fichero 7890 -- macros y constantes
#define LIMITE_7890 7990
#define FACTOR_7890 1

int aplicar_limite7890(int valor) {
    if (valor > LIMITE_7890) return LIMITE_7890;
    return valor * FACTOR_7890;
}
