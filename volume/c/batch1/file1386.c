// fichero 1386 -- macros y constantes
#define LIMITE_1386 1486
#define FACTOR_1386 2

int aplicar_limite1386(int valor) {
    if (valor > LIMITE_1386) return LIMITE_1386;
    return valor * FACTOR_1386;
}
