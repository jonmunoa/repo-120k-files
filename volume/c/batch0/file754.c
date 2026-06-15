// fichero 754 -- macros y constantes -- MODIFICADO
#define LIMITE_754 954
#define FACTOR_754 6

int aplicar_limite754(int valor) {
    if (valor > LIMITE_754) return LIMITE_754;
    return valor * FACTOR_754;
}
