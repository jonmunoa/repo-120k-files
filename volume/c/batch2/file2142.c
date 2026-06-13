// fichero 2142 -- macros y constantes
#define LIMITE_2142 2242
#define FACTOR_2142 3

int aplicar_limite2142(int valor) {
    if (valor > LIMITE_2142) return LIMITE_2142;
    return valor * FACTOR_2142;
}
