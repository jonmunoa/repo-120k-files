// fichero 23386 -- macros y constantes
#define LIMITE_23386 23486
#define FACTOR_23386 2

int aplicar_limite23386(int valor) {
    if (valor > LIMITE_23386) return LIMITE_23386;
    return valor * FACTOR_23386;
}
