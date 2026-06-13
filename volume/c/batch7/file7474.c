// fichero 7474 -- macros y constantes
#define LIMITE_7474 7574
#define FACTOR_7474 5

int aplicar_limite7474(int valor) {
    if (valor > LIMITE_7474) return LIMITE_7474;
    return valor * FACTOR_7474;
}
