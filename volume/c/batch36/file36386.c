// fichero 36386 -- macros y constantes -- MODIFICADO
#define LIMITE_36386 36586
#define FACTOR_36386 3

int aplicar_limite36386(int valor) {
    if (valor > LIMITE_36386) return LIMITE_36386;
    return valor * FACTOR_36386;
}
