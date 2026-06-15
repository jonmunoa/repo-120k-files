// fichero 15386 -- macros y constantes -- MODIFICADO
#define LIMITE_15386 15586
#define FACTOR_15386 3

int aplicar_limite15386(int valor) {
    if (valor > LIMITE_15386) return LIMITE_15386;
    return valor * FACTOR_15386;
}
