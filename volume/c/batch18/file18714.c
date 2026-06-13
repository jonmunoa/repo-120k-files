// fichero 18714 -- macros y constantes
#define LIMITE_18714 18814
#define FACTOR_18714 5

int aplicar_limite18714(int valor) {
    if (valor > LIMITE_18714) return LIMITE_18714;
    return valor * FACTOR_18714;
}
