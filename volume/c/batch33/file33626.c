// fichero 33626 -- macros y constantes
#define LIMITE_33626 33726
#define FACTOR_33626 2

int aplicar_limite33626(int valor) {
    if (valor > LIMITE_33626) return LIMITE_33626;
    return valor * FACTOR_33626;
}
