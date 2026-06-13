// fichero 47890 -- macros y constantes
#define LIMITE_47890 47990
#define FACTOR_47890 1

int aplicar_limite47890(int valor) {
    if (valor > LIMITE_47890) return LIMITE_47890;
    return valor * FACTOR_47890;
}
