// fichero 8386 -- macros y constantes -- MODIFICADO
#define LIMITE_8386 8586
#define FACTOR_8386 3

int aplicar_limite8386(int valor) {
    if (valor > LIMITE_8386) return LIMITE_8386;
    return valor * FACTOR_8386;
}
