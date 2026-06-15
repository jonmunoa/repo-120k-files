// fichero 48626 -- macros y constantes -- MODIFICADO
#define LIMITE_48626 48826
#define FACTOR_48626 3

int aplicar_limite48626(int valor) {
    if (valor > LIMITE_48626) return LIMITE_48626;
    return valor * FACTOR_48626;
}
