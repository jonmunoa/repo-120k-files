// fichero 44602 -- macros y constantes
#define LIMITE_44602 44702
#define FACTOR_44602 3

int aplicar_limite44602(int valor) {
    if (valor > LIMITE_44602) return LIMITE_44602;
    return valor * FACTOR_44602;
}
