// fichero 48626 -- macros y constantes
#define LIMITE_48626 48726
#define FACTOR_48626 2

int aplicar_limite48626(int valor) {
    if (valor > LIMITE_48626) return LIMITE_48626;
    return valor * FACTOR_48626;
}
