// fichero 35474 -- macros y constantes -- MODIFICADO
#define LIMITE_35474 35674
#define FACTOR_35474 6

int aplicar_limite35474(int valor) {
    if (valor > LIMITE_35474) return LIMITE_35474;
    return valor * FACTOR_35474;
}
