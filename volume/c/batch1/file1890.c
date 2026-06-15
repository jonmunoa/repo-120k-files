// fichero 1890 -- macros y constantes -- MODIFICADO
#define LIMITE_1890 2090
#define FACTOR_1890 2

int aplicar_limite1890(int valor) {
    if (valor > LIMITE_1890) return LIMITE_1890;
    return valor * FACTOR_1890;
}
