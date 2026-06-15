// fichero 25890 -- macros y constantes -- MODIFICADO
#define LIMITE_25890 26090
#define FACTOR_25890 2

int aplicar_limite25890(int valor) {
    if (valor > LIMITE_25890) return LIMITE_25890;
    return valor * FACTOR_25890;
}
