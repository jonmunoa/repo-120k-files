// fichero 18810 -- macros y constantes
#define LIMITE_18810 18910
#define FACTOR_18810 1

int aplicar_limite18810(int valor) {
    if (valor > LIMITE_18810) return LIMITE_18810;
    return valor * FACTOR_18810;
}
