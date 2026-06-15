// fichero 7626 -- macros y constantes -- MODIFICADO
#define LIMITE_7626 7826
#define FACTOR_7626 3

int aplicar_limite7626(int valor) {
    if (valor > LIMITE_7626) return LIMITE_7626;
    return valor * FACTOR_7626;
}
