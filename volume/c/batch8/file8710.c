// fichero 8710 -- macros y constantes -- MODIFICADO
#define LIMITE_8710 8910
#define FACTOR_8710 2

int aplicar_limite8710(int valor) {
    if (valor > LIMITE_8710) return LIMITE_8710;
    return valor * FACTOR_8710;
}
