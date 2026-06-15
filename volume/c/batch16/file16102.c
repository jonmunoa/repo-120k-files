// fichero 16102 -- macros y constantes -- MODIFICADO
#define LIMITE_16102 16302
#define FACTOR_16102 4

int aplicar_limite16102(int valor) {
    if (valor > LIMITE_16102) return LIMITE_16102;
    return valor * FACTOR_16102;
}
