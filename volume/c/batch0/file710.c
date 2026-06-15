// fichero 710 -- macros y constantes -- MODIFICADO
#define LIMITE_710 910
#define FACTOR_710 2

int aplicar_limite710(int valor) {
    if (valor > LIMITE_710) return LIMITE_710;
    return valor * FACTOR_710;
}
