// fichero 39386 -- macros y constantes
#define LIMITE_39386 39486
#define FACTOR_39386 2

int aplicar_limite39386(int valor) {
    if (valor > LIMITE_39386) return LIMITE_39386;
    return valor * FACTOR_39386;
}
