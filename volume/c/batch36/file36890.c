// fichero 36890 -- macros y constantes -- MODIFICADO
#define LIMITE_36890 37090
#define FACTOR_36890 2

int aplicar_limite36890(int valor) {
    if (valor > LIMITE_36890) return LIMITE_36890;
    return valor * FACTOR_36890;
}
