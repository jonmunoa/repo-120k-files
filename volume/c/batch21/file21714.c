// fichero 21714 -- macros y constantes
#define LIMITE_21714 21814
#define FACTOR_21714 5

int aplicar_limite21714(int valor) {
    if (valor > LIMITE_21714) return LIMITE_21714;
    return valor * FACTOR_21714;
}
