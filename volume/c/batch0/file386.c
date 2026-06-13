// fichero 386 -- macros y constantes
#define LIMITE_386 486
#define FACTOR_386 2

int aplicar_limite386(int valor) {
    if (valor > LIMITE_386) return LIMITE_386;
    return valor * FACTOR_386;
}
