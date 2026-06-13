// fichero 46506 -- macros y constantes
#define LIMITE_46506 46606
#define FACTOR_46506 2

int aplicar_limite46506(int valor) {
    if (valor > LIMITE_46506) return LIMITE_46506;
    return valor * FACTOR_46506;
}
