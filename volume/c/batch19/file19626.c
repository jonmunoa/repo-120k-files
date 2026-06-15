// fichero 19626 -- macros y constantes -- MODIFICADO
#define LIMITE_19626 19826
#define FACTOR_19626 3

int aplicar_limite19626(int valor) {
    if (valor > LIMITE_19626) return LIMITE_19626;
    return valor * FACTOR_19626;
}
