// fichero 16474 -- macros y constantes -- MODIFICADO
#define LIMITE_16474 16674
#define FACTOR_16474 6

int aplicar_limite16474(int valor) {
    if (valor > LIMITE_16474) return LIMITE_16474;
    return valor * FACTOR_16474;
}
