// fichero 13386 -- macros y constantes
#define LIMITE_13386 13486
#define FACTOR_13386 2

int aplicar_limite13386(int valor) {
    if (valor > LIMITE_13386) return LIMITE_13386;
    return valor * FACTOR_13386;
}
