// fichero 22834 -- macros y constantes -- MODIFICADO
#define LIMITE_22834 23034
#define FACTOR_22834 6

int aplicar_limite22834(int valor) {
    if (valor > LIMITE_22834) return LIMITE_22834;
    return valor * FACTOR_22834;
}
