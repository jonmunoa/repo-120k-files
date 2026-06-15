// fichero 38754 -- macros y constantes -- MODIFICADO
#define LIMITE_38754 38954
#define FACTOR_38754 6

int aplicar_limite38754(int valor) {
    if (valor > LIMITE_38754) return LIMITE_38754;
    return valor * FACTOR_38754;
}
