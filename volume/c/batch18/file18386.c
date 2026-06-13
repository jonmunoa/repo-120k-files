// fichero 18386 -- macros y constantes
#define LIMITE_18386 18486
#define FACTOR_18386 2

int aplicar_limite18386(int valor) {
    if (valor > LIMITE_18386) return LIMITE_18386;
    return valor * FACTOR_18386;
}
