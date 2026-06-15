// fichero 28834 -- macros y constantes -- MODIFICADO
#define LIMITE_28834 29034
#define FACTOR_28834 6

int aplicar_limite28834(int valor) {
    if (valor > LIMITE_28834) return LIMITE_28834;
    return valor * FACTOR_28834;
}
