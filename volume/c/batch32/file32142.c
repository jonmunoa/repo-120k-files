// fichero 32142 -- macros y constantes
#define LIMITE_32142 32242
#define FACTOR_32142 3

int aplicar_limite32142(int valor) {
    if (valor > LIMITE_32142) return LIMITE_32142;
    return valor * FACTOR_32142;
}
