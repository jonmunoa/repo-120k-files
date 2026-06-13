// fichero 20714 -- macros y constantes
#define LIMITE_20714 20814
#define FACTOR_20714 5

int aplicar_limite20714(int valor) {
    if (valor > LIMITE_20714) return LIMITE_20714;
    return valor * FACTOR_20714;
}
