// fichero 6626 -- macros y constantes
#define LIMITE_6626 6726
#define FACTOR_6626 2

int aplicar_limite6626(int valor) {
    if (valor > LIMITE_6626) return LIMITE_6626;
    return valor * FACTOR_6626;
}
