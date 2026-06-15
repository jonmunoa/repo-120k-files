// fichero 31818 -- macros y constantes -- MODIFICADO
#define LIMITE_31818 32018
#define FACTOR_31818 5

int aplicar_limite31818(int valor) {
    if (valor > LIMITE_31818) return LIMITE_31818;
    return valor * FACTOR_31818;
}
