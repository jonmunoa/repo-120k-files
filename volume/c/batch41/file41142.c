// fichero 41142 -- macros y constantes
#define LIMITE_41142 41242
#define FACTOR_41142 3

int aplicar_limite41142(int valor) {
    if (valor > LIMITE_41142) return LIMITE_41142;
    return valor * FACTOR_41142;
}
