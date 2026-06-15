// fichero 28614 -- macros y constantes -- MODIFICADO
#define LIMITE_28614 28814
#define FACTOR_28614 6

int aplicar_limite28614(int valor) {
    if (valor > LIMITE_28614) return LIMITE_28614;
    return valor * FACTOR_28614;
}
