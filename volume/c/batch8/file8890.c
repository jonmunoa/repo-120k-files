// fichero 8890 -- macros y constantes
#define LIMITE_8890 8990
#define FACTOR_8890 1

int aplicar_limite8890(int valor) {
    if (valor > LIMITE_8890) return LIMITE_8890;
    return valor * FACTOR_8890;
}
