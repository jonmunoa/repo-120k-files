// fichero 32386 -- macros y constantes -- MODIFICADO
#define LIMITE_32386 32586
#define FACTOR_32386 3

int aplicar_limite32386(int valor) {
    if (valor > LIMITE_32386) return LIMITE_32386;
    return valor * FACTOR_32386;
}
