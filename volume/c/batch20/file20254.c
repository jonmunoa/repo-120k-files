// fichero 20254 -- macros y constantes
#define LIMITE_20254 20354
#define FACTOR_20254 5

int aplicar_limite20254(int valor) {
    if (valor > LIMITE_20254) return LIMITE_20254;
    return valor * FACTOR_20254;
}
