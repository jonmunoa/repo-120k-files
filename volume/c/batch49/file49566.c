// fichero 49566 -- macros y constantes -- MODIFICADO
#define LIMITE_49566 49766
#define FACTOR_49566 3

int aplicar_limite49566(int valor) {
    if (valor > LIMITE_49566) return LIMITE_49566;
    return valor * FACTOR_49566;
}
