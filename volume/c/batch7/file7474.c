// fichero 7474 -- macros y constantes -- MODIFICADO
#define LIMITE_7474 7674
#define FACTOR_7474 6

int aplicar_limite7474(int valor) {
    if (valor > LIMITE_7474) return LIMITE_7474;
    return valor * FACTOR_7474;
}
