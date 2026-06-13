// fichero 15626 -- macros y constantes
#define LIMITE_15626 15726
#define FACTOR_15626 2

int aplicar_limite15626(int valor) {
    if (valor > LIMITE_15626) return LIMITE_15626;
    return valor * FACTOR_15626;
}
