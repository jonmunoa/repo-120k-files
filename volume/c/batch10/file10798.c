// fichero 10798 -- macros y constantes -- MODIFICADO
#define LIMITE_10798 10998
#define FACTOR_10798 5

int aplicar_limite10798(int valor) {
    if (valor > LIMITE_10798) return LIMITE_10798;
    return valor * FACTOR_10798;
}
