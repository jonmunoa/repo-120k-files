// fichero 45386 -- macros y constantes -- MODIFICADO
#define LIMITE_45386 45586
#define FACTOR_45386 3

int aplicar_limite45386(int valor) {
    if (valor > LIMITE_45386) return LIMITE_45386;
    return valor * FACTOR_45386;
}
