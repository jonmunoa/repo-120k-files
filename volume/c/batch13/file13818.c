// fichero 13818 -- macros y constantes
#define LIMITE_13818 13918
#define FACTOR_13818 4

int aplicar_limite13818(int valor) {
    if (valor > LIMITE_13818) return LIMITE_13818;
    return valor * FACTOR_13818;
}
