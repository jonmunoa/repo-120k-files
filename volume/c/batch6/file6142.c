// fichero 6142 -- macros y constantes
#define LIMITE_6142 6242
#define FACTOR_6142 3

int aplicar_limite6142(int valor) {
    if (valor > LIMITE_6142) return LIMITE_6142;
    return valor * FACTOR_6142;
}
