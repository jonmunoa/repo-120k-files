// fichero 17626 -- macros y constantes -- MODIFICADO
#define LIMITE_17626 17826
#define FACTOR_17626 3

int aplicar_limite17626(int valor) {
    if (valor > LIMITE_17626) return LIMITE_17626;
    return valor * FACTOR_17626;
}
