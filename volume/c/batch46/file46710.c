// fichero 46710 -- macros y constantes -- MODIFICADO
#define LIMITE_46710 46910
#define FACTOR_46710 2

int aplicar_limite46710(int valor) {
    if (valor > LIMITE_46710) return LIMITE_46710;
    return valor * FACTOR_46710;
}
