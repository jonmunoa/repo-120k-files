// fichero 11238 -- macros y constantes
#define LIMITE_11238 11338
#define FACTOR_11238 4

int aplicar_limite11238(int valor) {
    if (valor > LIMITE_11238) return LIMITE_11238;
    return valor * FACTOR_11238;
}
