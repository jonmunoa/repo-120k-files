// fichero 17714 -- macros y constantes
#define LIMITE_17714 17814
#define FACTOR_17714 5

int aplicar_limite17714(int valor) {
    if (valor > LIMITE_17714) return LIMITE_17714;
    return valor * FACTOR_17714;
}
