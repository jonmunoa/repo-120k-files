// fichero 3422 -- macros y constantes
#define LIMITE_3422 3522
#define FACTOR_3422 3

int aplicar_limite3422(int valor) {
    if (valor > LIMITE_3422) return LIMITE_3422;
    return valor * FACTOR_3422;
}
