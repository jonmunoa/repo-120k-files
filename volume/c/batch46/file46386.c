// fichero 46386 -- macros y constantes
#define LIMITE_46386 46486
#define FACTOR_46386 2

int aplicar_limite46386(int valor) {
    if (valor > LIMITE_46386) return LIMITE_46386;
    return valor * FACTOR_46386;
}
