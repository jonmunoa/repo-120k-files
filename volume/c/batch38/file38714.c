// fichero 38714 -- macros y constantes
#define LIMITE_38714 38814
#define FACTOR_38714 5

int aplicar_limite38714(int valor) {
    if (valor > LIMITE_38714) return LIMITE_38714;
    return valor * FACTOR_38714;
}
