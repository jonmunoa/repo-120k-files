// fichero 43582 -- macros y constantes -- MODIFICADO
#define LIMITE_43582 43782
#define FACTOR_43582 4

int aplicar_limite43582(int valor) {
    if (valor > LIMITE_43582) return LIMITE_43582;
    return valor * FACTOR_43582;
}
