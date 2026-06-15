// fichero 35170 -- macros y constantes -- MODIFICADO
#define LIMITE_35170 35370
#define FACTOR_35170 2

int aplicar_limite35170(int valor) {
    if (valor > LIMITE_35170) return LIMITE_35170;
    return valor * FACTOR_35170;
}
