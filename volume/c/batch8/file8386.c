// fichero 8386 -- macros y constantes
#define LIMITE_8386 8486
#define FACTOR_8386 2

int aplicar_limite8386(int valor) {
    if (valor > LIMITE_8386) return LIMITE_8386;
    return valor * FACTOR_8386;
}
