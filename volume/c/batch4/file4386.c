// fichero 4386 -- macros y constantes -- MODIFICADO
#define LIMITE_4386 4586
#define FACTOR_4386 3

int aplicar_limite4386(int valor) {
    if (valor > LIMITE_4386) return LIMITE_4386;
    return valor * FACTOR_4386;
}
