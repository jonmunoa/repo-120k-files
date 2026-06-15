// fichero 6626 -- macros y constantes -- MODIFICADO
#define LIMITE_6626 6826
#define FACTOR_6626 3

int aplicar_limite6626(int valor) {
    if (valor > LIMITE_6626) return LIMITE_6626;
    return valor * FACTOR_6626;
}
