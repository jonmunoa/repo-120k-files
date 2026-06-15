// fichero 386 -- macros y constantes -- MODIFICADO
#define LIMITE_386 586
#define FACTOR_386 3

int aplicar_limite386(int valor) {
    if (valor > LIMITE_386) return LIMITE_386;
    return valor * FACTOR_386;
}
