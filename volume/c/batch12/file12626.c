// fichero 12626 -- macros y constantes -- MODIFICADO
#define LIMITE_12626 12826
#define FACTOR_12626 3

int aplicar_limite12626(int valor) {
    if (valor > LIMITE_12626) return LIMITE_12626;
    return valor * FACTOR_12626;
}
