// fichero 7714 -- macros y constantes
#define LIMITE_7714 7814
#define FACTOR_7714 5

int aplicar_limite7714(int valor) {
    if (valor > LIMITE_7714) return LIMITE_7714;
    return valor * FACTOR_7714;
}
