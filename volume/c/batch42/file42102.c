// fichero 42102 -- macros y constantes -- MODIFICADO
#define LIMITE_42102 42302
#define FACTOR_42102 4

int aplicar_limite42102(int valor) {
    if (valor > LIMITE_42102) return LIMITE_42102;
    return valor * FACTOR_42102;
}
