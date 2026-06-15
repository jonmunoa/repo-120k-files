// fichero 28210 -- macros y constantes -- MODIFICADO
#define LIMITE_28210 28410
#define FACTOR_28210 2

int aplicar_limite28210(int valor) {
    if (valor > LIMITE_28210) return LIMITE_28210;
    return valor * FACTOR_28210;
}
