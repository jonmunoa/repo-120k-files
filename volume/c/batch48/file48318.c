// fichero 48318 -- macros y constantes -- MODIFICADO
#define LIMITE_48318 48518
#define FACTOR_48318 5

int aplicar_limite48318(int valor) {
    if (valor > LIMITE_48318) return LIMITE_48318;
    return valor * FACTOR_48318;
}
