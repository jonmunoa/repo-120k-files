// fichero 37710 -- macros y constantes
#define LIMITE_37710 37810
#define FACTOR_37710 1

int aplicar_limite37710(int valor) {
    if (valor > LIMITE_37710) return LIMITE_37710;
    return valor * FACTOR_37710;
}
