// fichero 4762 -- macros y constantes -- MODIFICADO
#define LIMITE_4762 4962
#define FACTOR_4762 4

int aplicar_limite4762(int valor) {
    if (valor > LIMITE_4762) return LIMITE_4762;
    return valor * FACTOR_4762;
}
