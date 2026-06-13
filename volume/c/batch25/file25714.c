// fichero 25714 -- macros y constantes
#define LIMITE_25714 25814
#define FACTOR_25714 5

int aplicar_limite25714(int valor) {
    if (valor > LIMITE_25714) return LIMITE_25714;
    return valor * FACTOR_25714;
}
