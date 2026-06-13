// fichero 6386 -- macros y constantes
#define LIMITE_6386 6486
#define FACTOR_6386 2

int aplicar_limite6386(int valor) {
    if (valor > LIMITE_6386) return LIMITE_6386;
    return valor * FACTOR_6386;
}
