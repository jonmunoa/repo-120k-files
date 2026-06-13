// fichero 42386 -- macros y constantes
#define LIMITE_42386 42486
#define FACTOR_42386 2

int aplicar_limite42386(int valor) {
    if (valor > LIMITE_42386) return LIMITE_42386;
    return valor * FACTOR_42386;
}
