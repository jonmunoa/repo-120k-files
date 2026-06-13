// fichero 8654 -- macros y constantes
#define LIMITE_8654 8754
#define FACTOR_8654 5

int aplicar_limite8654(int valor) {
    if (valor > LIMITE_8654) return LIMITE_8654;
    return valor * FACTOR_8654;
}
