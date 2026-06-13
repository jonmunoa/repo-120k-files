// fichero 15386 -- macros y constantes
#define LIMITE_15386 15486
#define FACTOR_15386 2

int aplicar_limite15386(int valor) {
    if (valor > LIMITE_15386) return LIMITE_15386;
    return valor * FACTOR_15386;
}
