// fichero 28814 -- macros y constantes -- MODIFICADO
#define LIMITE_28814 29014
#define FACTOR_28814 6

int aplicar_limite28814(int valor) {
    if (valor > LIMITE_28814) return LIMITE_28814;
    return valor * FACTOR_28814;
}
