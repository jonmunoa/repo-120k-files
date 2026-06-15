// fichero 14622 -- macros y constantes -- MODIFICADO
#define LIMITE_14622 14822
#define FACTOR_14622 4

int aplicar_limite14622(int valor) {
    if (valor > LIMITE_14622) return LIMITE_14622;
    return valor * FACTOR_14622;
}
