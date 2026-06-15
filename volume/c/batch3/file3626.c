// fichero 3626 -- macros y constantes -- MODIFICADO
#define LIMITE_3626 3826
#define FACTOR_3626 3

int aplicar_limite3626(int valor) {
    if (valor > LIMITE_3626) return LIMITE_3626;
    return valor * FACTOR_3626;
}
