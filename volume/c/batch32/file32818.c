// fichero 32818 -- macros y constantes -- MODIFICADO
#define LIMITE_32818 33018
#define FACTOR_32818 5

int aplicar_limite32818(int valor) {
    if (valor > LIMITE_32818) return LIMITE_32818;
    return valor * FACTOR_32818;
}
