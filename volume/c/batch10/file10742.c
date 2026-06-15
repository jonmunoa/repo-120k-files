// fichero 10742 -- macros y constantes -- MODIFICADO
#define LIMITE_10742 10942
#define FACTOR_10742 4

int aplicar_limite10742(int valor) {
    if (valor > LIMITE_10742) return LIMITE_10742;
    return valor * FACTOR_10742;
}
