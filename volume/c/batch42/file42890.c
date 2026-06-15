// fichero 42890 -- macros y constantes -- MODIFICADO
#define LIMITE_42890 43090
#define FACTOR_42890 2

int aplicar_limite42890(int valor) {
    if (valor > LIMITE_42890) return LIMITE_42890;
    return valor * FACTOR_42890;
}
