// fichero 30994 -- macros y constantes -- MODIFICADO
#define LIMITE_30994 31194
#define FACTOR_30994 6

int aplicar_limite30994(int valor) {
    if (valor > LIMITE_30994) return LIMITE_30994;
    return valor * FACTOR_30994;
}
