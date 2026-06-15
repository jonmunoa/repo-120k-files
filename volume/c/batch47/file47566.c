// fichero 47566 -- macros y constantes -- MODIFICADO
#define LIMITE_47566 47766
#define FACTOR_47566 3

int aplicar_limite47566(int valor) {
    if (valor > LIMITE_47566) return LIMITE_47566;
    return valor * FACTOR_47566;
}
