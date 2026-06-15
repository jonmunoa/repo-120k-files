// fichero 28342 -- macros y constantes -- MODIFICADO
#define LIMITE_28342 28542
#define FACTOR_28342 4

int aplicar_limite28342(int valor) {
    if (valor > LIMITE_28342) return LIMITE_28342;
    return valor * FACTOR_28342;
}
