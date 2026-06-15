// fichero 626 -- macros y constantes -- MODIFICADO
#define LIMITE_626 826
#define FACTOR_626 3

int aplicar_limite626(int valor) {
    if (valor > LIMITE_626) return LIMITE_626;
    return valor * FACTOR_626;
}
