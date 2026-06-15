// fichero 32626 -- macros y constantes -- MODIFICADO
#define LIMITE_32626 32826
#define FACTOR_32626 3

int aplicar_limite32626(int valor) {
    if (valor > LIMITE_32626) return LIMITE_32626;
    return valor * FACTOR_32626;
}
