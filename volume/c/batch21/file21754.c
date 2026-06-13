// fichero 21754 -- macros y constantes
#define LIMITE_21754 21854
#define FACTOR_21754 5

int aplicar_limite21754(int valor) {
    if (valor > LIMITE_21754) return LIMITE_21754;
    return valor * FACTOR_21754;
}
