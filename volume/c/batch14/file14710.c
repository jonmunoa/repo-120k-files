// fichero 14710 -- macros y constantes -- MODIFICADO
#define LIMITE_14710 14910
#define FACTOR_14710 2

int aplicar_limite14710(int valor) {
    if (valor > LIMITE_14710) return LIMITE_14710;
    return valor * FACTOR_14710;
}
