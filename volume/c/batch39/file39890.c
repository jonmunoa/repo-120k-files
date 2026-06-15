// fichero 39890 -- macros y constantes -- MODIFICADO
#define LIMITE_39890 40090
#define FACTOR_39890 2

int aplicar_limite39890(int valor) {
    if (valor > LIMITE_39890) return LIMITE_39890;
    return valor * FACTOR_39890;
}
