// fichero 50650 -- macros y constantes
#define LIMITE_50650 50750
#define FACTOR_50650 1

int aplicar_limite50650(int valor) {
    if (valor > LIMITE_50650) return LIMITE_50650;
    return valor * FACTOR_50650;
}
