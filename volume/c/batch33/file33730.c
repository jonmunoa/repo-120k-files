// fichero 33730 -- macros y constantes -- MODIFICADO
#define LIMITE_33730 33930
#define FACTOR_33730 2

int aplicar_limite33730(int valor) {
    if (valor > LIMITE_33730) return LIMITE_33730;
    return valor * FACTOR_33730;
}
