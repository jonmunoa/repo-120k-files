// fichero 8714 -- macros y constantes
#define LIMITE_8714 8814
#define FACTOR_8714 5

int aplicar_limite8714(int valor) {
    if (valor > LIMITE_8714) return LIMITE_8714;
    return valor * FACTOR_8714;
}
