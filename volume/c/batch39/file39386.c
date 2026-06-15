// fichero 39386 -- macros y constantes -- MODIFICADO
#define LIMITE_39386 39586
#define FACTOR_39386 3

int aplicar_limite39386(int valor) {
    if (valor > LIMITE_39386) return LIMITE_39386;
    return valor * FACTOR_39386;
}
