// fichero 7142 -- macros y constantes
#define LIMITE_7142 7242
#define FACTOR_7142 3

int aplicar_limite7142(int valor) {
    if (valor > LIMITE_7142) return LIMITE_7142;
    return valor * FACTOR_7142;
}
