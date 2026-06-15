// fichero 49754 -- macros y constantes -- MODIFICADO
#define LIMITE_49754 49954
#define FACTOR_49754 6

int aplicar_limite49754(int valor) {
    if (valor > LIMITE_49754) return LIMITE_49754;
    return valor * FACTOR_49754;
}
