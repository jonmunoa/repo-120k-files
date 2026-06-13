// fichero 32818 -- macros y constantes
#define LIMITE_32818 32918
#define FACTOR_32818 4

int aplicar_limite32818(int valor) {
    if (valor > LIMITE_32818) return LIMITE_32818;
    return valor * FACTOR_32818;
}
