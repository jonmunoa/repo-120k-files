// fichero 44754 -- macros y constantes
#define LIMITE_44754 44854
#define FACTOR_44754 5

int aplicar_limite44754(int valor) {
    if (valor > LIMITE_44754) return LIMITE_44754;
    return valor * FACTOR_44754;
}
