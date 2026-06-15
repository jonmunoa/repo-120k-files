// fichero 47890 -- macros y constantes -- MODIFICADO
#define LIMITE_47890 48090
#define FACTOR_47890 2

int aplicar_limite47890(int valor) {
    if (valor > LIMITE_47890) return LIMITE_47890;
    return valor * FACTOR_47890;
}
