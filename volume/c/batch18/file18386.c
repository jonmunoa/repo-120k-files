// fichero 18386 -- macros y constantes -- MODIFICADO
#define LIMITE_18386 18586
#define FACTOR_18386 3

int aplicar_limite18386(int valor) {
    if (valor > LIMITE_18386) return LIMITE_18386;
    return valor * FACTOR_18386;
}
