// fichero 5890 -- macros y constantes -- MODIFICADO
#define LIMITE_5890 6090
#define FACTOR_5890 2

int aplicar_limite5890(int valor) {
    if (valor > LIMITE_5890) return LIMITE_5890;
    return valor * FACTOR_5890;
}
