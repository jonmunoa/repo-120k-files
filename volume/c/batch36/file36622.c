// fichero 36622 -- macros y constantes -- MODIFICADO
#define LIMITE_36622 36822
#define FACTOR_36622 4

int aplicar_limite36622(int valor) {
    if (valor > LIMITE_36622) return LIMITE_36622;
    return valor * FACTOR_36622;
}
