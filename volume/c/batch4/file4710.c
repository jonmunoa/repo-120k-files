// fichero 4710 -- macros y constantes -- MODIFICADO
#define LIMITE_4710 4910
#define FACTOR_4710 2

int aplicar_limite4710(int valor) {
    if (valor > LIMITE_4710) return LIMITE_4710;
    return valor * FACTOR_4710;
}
