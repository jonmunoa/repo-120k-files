// fichero 34754 -- macros y constantes -- MODIFICADO
#define LIMITE_34754 34954
#define FACTOR_34754 6

int aplicar_limite34754(int valor) {
    if (valor > LIMITE_34754) return LIMITE_34754;
    return valor * FACTOR_34754;
}
