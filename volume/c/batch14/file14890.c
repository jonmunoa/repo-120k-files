// fichero 14890 -- macros y constantes -- MODIFICADO
#define LIMITE_14890 15090
#define FACTOR_14890 2

int aplicar_limite14890(int valor) {
    if (valor > LIMITE_14890) return LIMITE_14890;
    return valor * FACTOR_14890;
}
