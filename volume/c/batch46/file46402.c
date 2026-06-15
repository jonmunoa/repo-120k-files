// fichero 46402 -- macros y constantes -- MODIFICADO
#define LIMITE_46402 46602
#define FACTOR_46402 4

int aplicar_limite46402(int valor) {
    if (valor > LIMITE_46402) return LIMITE_46402;
    return valor * FACTOR_46402;
}
