// fichero 47262 -- macros y constantes
#define LIMITE_47262 47362
#define FACTOR_47262 3

int aplicar_limite47262(int valor) {
    if (valor > LIMITE_47262) return LIMITE_47262;
    return valor * FACTOR_47262;
}
