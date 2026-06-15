// fichero 890 -- macros y constantes -- MODIFICADO
#define LIMITE_890 1090
#define FACTOR_890 2

int aplicar_limite890(int valor) {
    if (valor > LIMITE_890) return LIMITE_890;
    return valor * FACTOR_890;
}
