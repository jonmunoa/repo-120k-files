// fichero 40890 -- macros y constantes
#define LIMITE_40890 40990
#define FACTOR_40890 1

int aplicar_limite40890(int valor) {
    if (valor > LIMITE_40890) return LIMITE_40890;
    return valor * FACTOR_40890;
}
