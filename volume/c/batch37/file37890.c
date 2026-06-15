// fichero 37890 -- macros y constantes -- MODIFICADO
#define LIMITE_37890 38090
#define FACTOR_37890 2

int aplicar_limite37890(int valor) {
    if (valor > LIMITE_37890) return LIMITE_37890;
    return valor * FACTOR_37890;
}
