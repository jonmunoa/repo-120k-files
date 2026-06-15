// fichero 37710 -- macros y constantes -- MODIFICADO
#define LIMITE_37710 37910
#define FACTOR_37710 2

int aplicar_limite37710(int valor) {
    if (valor > LIMITE_37710) return LIMITE_37710;
    return valor * FACTOR_37710;
}
