// fichero 26142 -- macros y constantes
#define LIMITE_26142 26242
#define FACTOR_26142 3

int aplicar_limite26142(int valor) {
    if (valor > LIMITE_26142) return LIMITE_26142;
    return valor * FACTOR_26142;
}
