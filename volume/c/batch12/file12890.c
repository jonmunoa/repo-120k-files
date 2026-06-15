// fichero 12890 -- macros y constantes -- MODIFICADO
#define LIMITE_12890 13090
#define FACTOR_12890 2

int aplicar_limite12890(int valor) {
    if (valor > LIMITE_12890) return LIMITE_12890;
    return valor * FACTOR_12890;
}
