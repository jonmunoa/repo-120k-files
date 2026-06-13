// fichero 8710 -- macros y constantes
#define LIMITE_8710 8810
#define FACTOR_8710 1

int aplicar_limite8710(int valor) {
    if (valor > LIMITE_8710) return LIMITE_8710;
    return valor * FACTOR_8710;
}
