// fichero 35170 -- macros y constantes
#define LIMITE_35170 35270
#define FACTOR_35170 1

int aplicar_limite35170(int valor) {
    if (valor > LIMITE_35170) return LIMITE_35170;
    return valor * FACTOR_35170;
}
