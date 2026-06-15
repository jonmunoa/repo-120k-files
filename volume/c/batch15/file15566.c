// fichero 15566 -- macros y constantes -- MODIFICADO
#define LIMITE_15566 15766
#define FACTOR_15566 3

int aplicar_limite15566(int valor) {
    if (valor > LIMITE_15566) return LIMITE_15566;
    return valor * FACTOR_15566;
}
