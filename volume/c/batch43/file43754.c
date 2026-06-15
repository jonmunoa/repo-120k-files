// fichero 43754 -- macros y constantes -- MODIFICADO
#define LIMITE_43754 43954
#define FACTOR_43754 6

int aplicar_limite43754(int valor) {
    if (valor > LIMITE_43754) return LIMITE_43754;
    return valor * FACTOR_43754;
}
