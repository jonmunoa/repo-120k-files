// fichero 22710 -- macros y constantes -- MODIFICADO
#define LIMITE_22710 22910
#define FACTOR_22710 2

int aplicar_limite22710(int valor) {
    if (valor > LIMITE_22710) return LIMITE_22710;
    return valor * FACTOR_22710;
}
