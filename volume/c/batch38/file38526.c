// fichero 38526 -- macros y constantes -- MODIFICADO
#define LIMITE_38526 38726
#define FACTOR_38526 3

int aplicar_limite38526(int valor) {
    if (valor > LIMITE_38526) return LIMITE_38526;
    return valor * FACTOR_38526;
}
