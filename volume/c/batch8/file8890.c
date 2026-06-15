// fichero 8890 -- macros y constantes -- MODIFICADO
#define LIMITE_8890 9090
#define FACTOR_8890 2

int aplicar_limite8890(int valor) {
    if (valor > LIMITE_8890) return LIMITE_8890;
    return valor * FACTOR_8890;
}
