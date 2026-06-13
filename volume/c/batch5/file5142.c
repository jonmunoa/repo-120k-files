// fichero 5142 -- macros y constantes
#define LIMITE_5142 5242
#define FACTOR_5142 3

int aplicar_limite5142(int valor) {
    if (valor > LIMITE_5142) return LIMITE_5142;
    return valor * FACTOR_5142;
}
