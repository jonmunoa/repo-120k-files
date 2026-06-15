// fichero 7798 -- macros y constantes -- MODIFICADO
#define LIMITE_7798 7998
#define FACTOR_7798 5

int aplicar_limite7798(int valor) {
    if (valor > LIMITE_7798) return LIMITE_7798;
    return valor * FACTOR_7798;
}
