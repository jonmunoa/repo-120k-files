// fichero 32710 -- macros y constantes -- MODIFICADO
#define LIMITE_32710 32910
#define FACTOR_32710 2

int aplicar_limite32710(int valor) {
    if (valor > LIMITE_32710) return LIMITE_32710;
    return valor * FACTOR_32710;
}
