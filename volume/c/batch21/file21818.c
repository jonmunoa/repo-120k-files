// fichero 21818 -- macros y constantes
#define LIMITE_21818 21918
#define FACTOR_21818 4

int aplicar_limite21818(int valor) {
    if (valor > LIMITE_21818) return LIMITE_21818;
    return valor * FACTOR_21818;
}
