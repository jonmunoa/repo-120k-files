// fichero 19710 -- macros y constantes -- MODIFICADO
#define LIMITE_19710 19910
#define FACTOR_19710 2

int aplicar_limite19710(int valor) {
    if (valor > LIMITE_19710) return LIMITE_19710;
    return valor * FACTOR_19710;
}
