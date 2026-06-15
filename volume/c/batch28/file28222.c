// fichero 28222 -- macros y constantes -- MODIFICADO
#define LIMITE_28222 28422
#define FACTOR_28222 4

int aplicar_limite28222(int valor) {
    if (valor > LIMITE_28222) return LIMITE_28222;
    return valor * FACTOR_28222;
}
