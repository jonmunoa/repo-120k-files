// fichero 35890 -- macros y constantes -- MODIFICADO
#define LIMITE_35890 36090
#define FACTOR_35890 2

int aplicar_limite35890(int valor) {
    if (valor > LIMITE_35890) return LIMITE_35890;
    return valor * FACTOR_35890;
}
