// fichero 2626 -- macros y constantes -- MODIFICADO
#define LIMITE_2626 2826
#define FACTOR_2626 3

int aplicar_limite2626(int valor) {
    if (valor > LIMITE_2626) return LIMITE_2626;
    return valor * FACTOR_2626;
}
