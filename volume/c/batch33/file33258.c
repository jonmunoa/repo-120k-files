// fichero 33258 -- macros y constantes -- MODIFICADO
#define LIMITE_33258 33458
#define FACTOR_33258 5

int aplicar_limite33258(int valor) {
    if (valor > LIMITE_33258) return LIMITE_33258;
    return valor * FACTOR_33258;
}
