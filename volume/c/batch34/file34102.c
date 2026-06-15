// fichero 34102 -- macros y constantes -- MODIFICADO
#define LIMITE_34102 34302
#define FACTOR_34102 4

int aplicar_limite34102(int valor) {
    if (valor > LIMITE_34102) return LIMITE_34102;
    return valor * FACTOR_34102;
}
