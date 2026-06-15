// fichero 26890 -- macros y constantes -- MODIFICADO
#define LIMITE_26890 27090
#define FACTOR_26890 2

int aplicar_limite26890(int valor) {
    if (valor > LIMITE_26890) return LIMITE_26890;
    return valor * FACTOR_26890;
}
