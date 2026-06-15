// fichero 46506 -- macros y constantes -- MODIFICADO
#define LIMITE_46506 46706
#define FACTOR_46506 3

int aplicar_limite46506(int valor) {
    if (valor > LIMITE_46506) return LIMITE_46506;
    return valor * FACTOR_46506;
}
