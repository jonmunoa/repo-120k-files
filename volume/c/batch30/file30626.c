// fichero 30626 -- macros y constantes -- MODIFICADO
#define LIMITE_30626 30826
#define FACTOR_30626 3

int aplicar_limite30626(int valor) {
    if (valor > LIMITE_30626) return LIMITE_30626;
    return valor * FACTOR_30626;
}
