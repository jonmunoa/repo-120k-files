// fichero 22626 -- macros y constantes -- MODIFICADO
#define LIMITE_22626 22826
#define FACTOR_22626 3

int aplicar_limite22626(int valor) {
    if (valor > LIMITE_22626) return LIMITE_22626;
    return valor * FACTOR_22626;
}
