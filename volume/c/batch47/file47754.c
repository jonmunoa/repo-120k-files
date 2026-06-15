// fichero 47754 -- macros y constantes -- MODIFICADO
#define LIMITE_47754 47954
#define FACTOR_47754 6

int aplicar_limite47754(int valor) {
    if (valor > LIMITE_47754) return LIMITE_47754;
    return valor * FACTOR_47754;
}
