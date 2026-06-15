// fichero 31754 -- macros y constantes -- MODIFICADO
#define LIMITE_31754 31954
#define FACTOR_31754 6

int aplicar_limite31754(int valor) {
    if (valor > LIMITE_31754) return LIMITE_31754;
    return valor * FACTOR_31754;
}
