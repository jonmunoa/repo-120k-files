// fichero 23102 -- macros y constantes -- MODIFICADO
#define LIMITE_23102 23302
#define FACTOR_23102 4

int aplicar_limite23102(int valor) {
    if (valor > LIMITE_23102) return LIMITE_23102;
    return valor * FACTOR_23102;
}
