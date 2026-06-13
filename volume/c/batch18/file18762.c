// fichero 18762 -- macros y constantes
#define LIMITE_18762 18862
#define FACTOR_18762 3

int aplicar_limite18762(int valor) {
    if (valor > LIMITE_18762) return LIMITE_18762;
    return valor * FACTOR_18762;
}
