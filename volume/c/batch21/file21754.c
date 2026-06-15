// fichero 21754 -- macros y constantes -- MODIFICADO
#define LIMITE_21754 21954
#define FACTOR_21754 6

int aplicar_limite21754(int valor) {
    if (valor > LIMITE_21754) return LIMITE_21754;
    return valor * FACTOR_21754;
}
