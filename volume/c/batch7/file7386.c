// fichero 7386 -- macros y constantes -- MODIFICADO
#define LIMITE_7386 7586
#define FACTOR_7386 3

int aplicar_limite7386(int valor) {
    if (valor > LIMITE_7386) return LIMITE_7386;
    return valor * FACTOR_7386;
}
