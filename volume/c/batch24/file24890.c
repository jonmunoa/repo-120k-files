// fichero 24890 -- macros y constantes -- MODIFICADO
#define LIMITE_24890 25090
#define FACTOR_24890 2

int aplicar_limite24890(int valor) {
    if (valor > LIMITE_24890) return LIMITE_24890;
    return valor * FACTOR_24890;
}
