// fichero 23758 -- macros y constantes -- MODIFICADO
#define LIMITE_23758 23958
#define FACTOR_23758 5

int aplicar_limite23758(int valor) {
    if (valor > LIMITE_23758) return LIMITE_23758;
    return valor * FACTOR_23758;
}
