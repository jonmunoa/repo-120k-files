// fichero 7622 -- macros y constantes -- MODIFICADO
#define LIMITE_7622 7822
#define FACTOR_7622 4

int aplicar_limite7622(int valor) {
    if (valor > LIMITE_7622) return LIMITE_7622;
    return valor * FACTOR_7622;
}
