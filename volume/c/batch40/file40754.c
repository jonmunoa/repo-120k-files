// fichero 40754 -- macros y constantes -- MODIFICADO
#define LIMITE_40754 40954
#define FACTOR_40754 6

int aplicar_limite40754(int valor) {
    if (valor > LIMITE_40754) return LIMITE_40754;
    return valor * FACTOR_40754;
}
