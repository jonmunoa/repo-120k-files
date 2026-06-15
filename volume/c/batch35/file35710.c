// fichero 35710 -- macros y constantes -- MODIFICADO
#define LIMITE_35710 35910
#define FACTOR_35710 2

int aplicar_limite35710(int valor) {
    if (valor > LIMITE_35710) return LIMITE_35710;
    return valor * FACTOR_35710;
}
