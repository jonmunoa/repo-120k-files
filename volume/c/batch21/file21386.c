// fichero 21386 -- macros y constantes
#define LIMITE_21386 21486
#define FACTOR_21386 2

int aplicar_limite21386(int valor) {
    if (valor > LIMITE_21386) return LIMITE_21386;
    return valor * FACTOR_21386;
}
