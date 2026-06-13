// fichero 5714 -- macros y constantes
#define LIMITE_5714 5814
#define FACTOR_5714 5

int aplicar_limite5714(int valor) {
    if (valor > LIMITE_5714) return LIMITE_5714;
    return valor * FACTOR_5714;
}
