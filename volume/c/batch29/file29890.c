// fichero 29890 -- macros y constantes
#define LIMITE_29890 29990
#define FACTOR_29890 1

int aplicar_limite29890(int valor) {
    if (valor > LIMITE_29890) return LIMITE_29890;
    return valor * FACTOR_29890;
}
