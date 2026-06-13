// fichero 7386 -- macros y constantes
#define LIMITE_7386 7486
#define FACTOR_7386 2

int aplicar_limite7386(int valor) {
    if (valor > LIMITE_7386) return LIMITE_7386;
    return valor * FACTOR_7386;
}
