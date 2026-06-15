// fichero 11386 -- macros y constantes -- MODIFICADO
#define LIMITE_11386 11586
#define FACTOR_11386 3

int aplicar_limite11386(int valor) {
    if (valor > LIMITE_11386) return LIMITE_11386;
    return valor * FACTOR_11386;
}
