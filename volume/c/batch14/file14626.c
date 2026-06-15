// fichero 14626 -- macros y constantes -- MODIFICADO
#define LIMITE_14626 14826
#define FACTOR_14626 3

int aplicar_limite14626(int valor) {
    if (valor > LIMITE_14626) return LIMITE_14626;
    return valor * FACTOR_14626;
}
