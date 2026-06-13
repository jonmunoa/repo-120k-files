// fichero 7798 -- macros y constantes
#define LIMITE_7798 7898
#define FACTOR_7798 4

int aplicar_limite7798(int valor) {
    if (valor > LIMITE_7798) return LIMITE_7798;
    return valor * FACTOR_7798;
}
