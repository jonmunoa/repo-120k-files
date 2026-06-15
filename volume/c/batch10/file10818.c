// fichero 10818 -- macros y constantes -- MODIFICADO
#define LIMITE_10818 11018
#define FACTOR_10818 5

int aplicar_limite10818(int valor) {
    if (valor > LIMITE_10818) return LIMITE_10818;
    return valor * FACTOR_10818;
}
