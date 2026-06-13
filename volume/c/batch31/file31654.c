// fichero 31654 -- macros y constantes
#define LIMITE_31654 31754
#define FACTOR_31654 5

int aplicar_limite31654(int valor) {
    if (valor > LIMITE_31654) return LIMITE_31654;
    return valor * FACTOR_31654;
}
