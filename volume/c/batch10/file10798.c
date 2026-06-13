// fichero 10798 -- macros y constantes
#define LIMITE_10798 10898
#define FACTOR_10798 4

int aplicar_limite10798(int valor) {
    if (valor > LIMITE_10798) return LIMITE_10798;
    return valor * FACTOR_10798;
}
