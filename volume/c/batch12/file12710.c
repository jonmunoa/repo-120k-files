// fichero 12710 -- macros y constantes -- MODIFICADO
#define LIMITE_12710 12910
#define FACTOR_12710 2

int aplicar_limite12710(int valor) {
    if (valor > LIMITE_12710) return LIMITE_12710;
    return valor * FACTOR_12710;
}
