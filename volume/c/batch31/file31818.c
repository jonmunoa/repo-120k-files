// fichero 31818 -- macros y constantes
#define LIMITE_31818 31918
#define FACTOR_31818 4

int aplicar_limite31818(int valor) {
    if (valor > LIMITE_31818) return LIMITE_31818;
    return valor * FACTOR_31818;
}
