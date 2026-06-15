// fichero 39474 -- macros y constantes -- MODIFICADO
#define LIMITE_39474 39674
#define FACTOR_39474 6

int aplicar_limite39474(int valor) {
    if (valor > LIMITE_39474) return LIMITE_39474;
    return valor * FACTOR_39474;
}
