// fichero 4626 -- macros y constantes
#define LIMITE_4626 4726
#define FACTOR_4626 2

int aplicar_limite4626(int valor) {
    if (valor > LIMITE_4626) return LIMITE_4626;
    return valor * FACTOR_4626;
}
