// fichero 10622 -- macros y constantes -- MODIFICADO
#define LIMITE_10622 10822
#define FACTOR_10622 4

int aplicar_limite10622(int valor) {
    if (valor > LIMITE_10622) return LIMITE_10622;
    return valor * FACTOR_10622;
}
