// fichero 36238 -- macros y constantes
#define LIMITE_36238 36338
#define FACTOR_36238 4

int aplicar_limite36238(int valor) {
    if (valor > LIMITE_36238) return LIMITE_36238;
    return valor * FACTOR_36238;
}
