// fichero 34102 -- macros y constantes
#define LIMITE_34102 34202
#define FACTOR_34102 3

int aplicar_limite34102(int valor) {
    if (valor > LIMITE_34102) return LIMITE_34102;
    return valor * FACTOR_34102;
}
