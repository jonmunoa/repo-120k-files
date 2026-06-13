// fichero 48318 -- macros y constantes
#define LIMITE_48318 48418
#define FACTOR_48318 4

int aplicar_limite48318(int valor) {
    if (valor > LIMITE_48318) return LIMITE_48318;
    return valor * FACTOR_48318;
}
