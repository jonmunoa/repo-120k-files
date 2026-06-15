// fichero 28890 -- macros y constantes -- MODIFICADO
#define LIMITE_28890 29090
#define FACTOR_28890 2

int aplicar_limite28890(int valor) {
    if (valor > LIMITE_28890) return LIMITE_28890;
    return valor * FACTOR_28890;
}
