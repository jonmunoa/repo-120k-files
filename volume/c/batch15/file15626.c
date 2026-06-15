// fichero 15626 -- macros y constantes -- MODIFICADO
#define LIMITE_15626 15826
#define FACTOR_15626 3

int aplicar_limite15626(int valor) {
    if (valor > LIMITE_15626) return LIMITE_15626;
    return valor * FACTOR_15626;
}
