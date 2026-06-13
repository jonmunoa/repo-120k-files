// fichero 18802 -- macros y constantes
#define LIMITE_18802 18902
#define FACTOR_18802 3

int aplicar_limite18802(int valor) {
    if (valor > LIMITE_18802) return LIMITE_18802;
    return valor * FACTOR_18802;
}
