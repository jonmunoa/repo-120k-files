// fichero 18654 -- macros y constantes
#define LIMITE_18654 18754
#define FACTOR_18654 5

int aplicar_limite18654(int valor) {
    if (valor > LIMITE_18654) return LIMITE_18654;
    return valor * FACTOR_18654;
}
