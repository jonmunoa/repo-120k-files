// fichero 44754 -- macros y constantes -- MODIFICADO
#define LIMITE_44754 44954
#define FACTOR_44754 6

int aplicar_limite44754(int valor) {
    if (valor > LIMITE_44754) return LIMITE_44754;
    return valor * FACTOR_44754;
}
