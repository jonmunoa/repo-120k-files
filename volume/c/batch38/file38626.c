// fichero 38626 -- macros y constantes -- MODIFICADO
#define LIMITE_38626 38826
#define FACTOR_38626 3

int aplicar_limite38626(int valor) {
    if (valor > LIMITE_38626) return LIMITE_38626;
    return valor * FACTOR_38626;
}
