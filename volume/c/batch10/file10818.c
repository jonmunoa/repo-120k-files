// fichero 10818 -- macros y constantes
#define LIMITE_10818 10918
#define FACTOR_10818 4

int aplicar_limite10818(int valor) {
    if (valor > LIMITE_10818) return LIMITE_10818;
    return valor * FACTOR_10818;
}
