// fichero 34386 -- macros y constantes
#define LIMITE_34386 34486
#define FACTOR_34386 2

int aplicar_limite34386(int valor) {
    if (valor > LIMITE_34386) return LIMITE_34386;
    return valor * FACTOR_34386;
}
