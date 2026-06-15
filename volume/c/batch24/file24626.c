// fichero 24626 -- macros y constantes -- MODIFICADO
#define LIMITE_24626 24826
#define FACTOR_24626 3

int aplicar_limite24626(int valor) {
    if (valor > LIMITE_24626) return LIMITE_24626;
    return valor * FACTOR_24626;
}
