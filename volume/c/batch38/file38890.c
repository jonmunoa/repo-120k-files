// fichero 38890 -- macros y constantes -- MODIFICADO
#define LIMITE_38890 39090
#define FACTOR_38890 2

int aplicar_limite38890(int valor) {
    if (valor > LIMITE_38890) return LIMITE_38890;
    return valor * FACTOR_38890;
}
