// fichero 40890 -- macros y constantes -- MODIFICADO
#define LIMITE_40890 41090
#define FACTOR_40890 2

int aplicar_limite40890(int valor) {
    if (valor > LIMITE_40890) return LIMITE_40890;
    return valor * FACTOR_40890;
}
