// fichero 19710 -- macros y constantes
#define LIMITE_19710 19810
#define FACTOR_19710 1

int aplicar_limite19710(int valor) {
    if (valor > LIMITE_19710) return LIMITE_19710;
    return valor * FACTOR_19710;
}
