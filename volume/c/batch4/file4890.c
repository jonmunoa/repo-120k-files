// fichero 4890 -- macros y constantes -- MODIFICADO
#define LIMITE_4890 5090
#define FACTOR_4890 2

int aplicar_limite4890(int valor) {
    if (valor > LIMITE_4890) return LIMITE_4890;
    return valor * FACTOR_4890;
}
