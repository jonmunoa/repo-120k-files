// fichero 11566 -- macros y constantes -- MODIFICADO
#define LIMITE_11566 11766
#define FACTOR_11566 3

int aplicar_limite11566(int valor) {
    if (valor > LIMITE_11566) return LIMITE_11566;
    return valor * FACTOR_11566;
}
