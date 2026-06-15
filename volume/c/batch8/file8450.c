// fichero 8450 -- macros y constantes -- MODIFICADO
#define LIMITE_8450 8650
#define FACTOR_8450 2

int aplicar_limite8450(int valor) {
    if (valor > LIMITE_8450) return LIMITE_8450;
    return valor * FACTOR_8450;
}
