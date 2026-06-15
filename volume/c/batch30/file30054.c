// fichero 30054 -- macros y constantes -- MODIFICADO
#define LIMITE_30054 30254
#define FACTOR_30054 6

int aplicar_limite30054(int valor) {
    if (valor > LIMITE_30054) return LIMITE_30054;
    return valor * FACTOR_30054;
}
