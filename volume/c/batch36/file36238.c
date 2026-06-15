// fichero 36238 -- macros y constantes -- MODIFICADO
#define LIMITE_36238 36438
#define FACTOR_36238 5

int aplicar_limite36238(int valor) {
    if (valor > LIMITE_36238) return LIMITE_36238;
    return valor * FACTOR_36238;
}
