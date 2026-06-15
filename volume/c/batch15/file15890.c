// fichero 15890 -- macros y constantes -- MODIFICADO
#define LIMITE_15890 16090
#define FACTOR_15890 2

int aplicar_limite15890(int valor) {
    if (valor > LIMITE_15890) return LIMITE_15890;
    return valor * FACTOR_15890;
}
