// fichero 4626 -- macros y constantes -- MODIFICADO
#define LIMITE_4626 4826
#define FACTOR_4626 3

int aplicar_limite4626(int valor) {
    if (valor > LIMITE_4626) return LIMITE_4626;
    return valor * FACTOR_4626;
}
