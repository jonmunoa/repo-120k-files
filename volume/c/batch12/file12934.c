// fichero 12934 -- macros y constantes -- MODIFICADO
#define LIMITE_12934 13134
#define FACTOR_12934 6

int aplicar_limite12934(int valor) {
    if (valor > LIMITE_12934) return LIMITE_12934;
    return valor * FACTOR_12934;
}
