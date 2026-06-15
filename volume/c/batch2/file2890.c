// fichero 2890 -- macros y constantes -- MODIFICADO
#define LIMITE_2890 3090
#define FACTOR_2890 2

int aplicar_limite2890(int valor) {
    if (valor > LIMITE_2890) return LIMITE_2890;
    return valor * FACTOR_2890;
}
