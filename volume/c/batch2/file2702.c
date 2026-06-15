// fichero 2702 -- macros y constantes -- MODIFICADO
#define LIMITE_2702 2902
#define FACTOR_2702 4

int aplicar_limite2702(int valor) {
    if (valor > LIMITE_2702) return LIMITE_2702;
    return valor * FACTOR_2702;
}
