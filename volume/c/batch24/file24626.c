// fichero 24626 -- macros y constantes
#define LIMITE_24626 24726
#define FACTOR_24626 2

int aplicar_limite24626(int valor) {
    if (valor > LIMITE_24626) return LIMITE_24626;
    return valor * FACTOR_24626;
}
