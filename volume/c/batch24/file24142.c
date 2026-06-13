// fichero 24142 -- macros y constantes
#define LIMITE_24142 24242
#define FACTOR_24142 3

int aplicar_limite24142(int valor) {
    if (valor > LIMITE_24142) return LIMITE_24142;
    return valor * FACTOR_24142;
}
