// fichero 26890 -- macros y constantes
#define LIMITE_26890 26990
#define FACTOR_26890 1

int aplicar_limite26890(int valor) {
    if (valor > LIMITE_26890) return LIMITE_26890;
    return valor * FACTOR_26890;
}
