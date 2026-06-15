// fichero 16626 -- macros y constantes -- MODIFICADO
#define LIMITE_16626 16826
#define FACTOR_16626 3

int aplicar_limite16626(int valor) {
    if (valor > LIMITE_16626) return LIMITE_16626;
    return valor * FACTOR_16626;
}
