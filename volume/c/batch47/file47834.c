// fichero 47834 -- macros y constantes -- MODIFICADO
#define LIMITE_47834 48034
#define FACTOR_47834 6

int aplicar_limite47834(int valor) {
    if (valor > LIMITE_47834) return LIMITE_47834;
    return valor * FACTOR_47834;
}
