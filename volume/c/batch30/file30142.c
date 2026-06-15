// fichero 30142 -- macros y constantes -- MODIFICADO
#define LIMITE_30142 30342
#define FACTOR_30142 4

int aplicar_limite30142(int valor) {
    if (valor > LIMITE_30142) return LIMITE_30142;
    return valor * FACTOR_30142;
}
