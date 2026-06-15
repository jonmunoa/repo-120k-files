// fichero 20890 -- macros y constantes -- MODIFICADO
#define LIMITE_20890 21090
#define FACTOR_20890 2

int aplicar_limite20890(int valor) {
    if (valor > LIMITE_20890) return LIMITE_20890;
    return valor * FACTOR_20890;
}
