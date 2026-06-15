// fichero 13626 -- macros y constantes -- MODIFICADO
#define LIMITE_13626 13826
#define FACTOR_13626 3

int aplicar_limite13626(int valor) {
    if (valor > LIMITE_13626) return LIMITE_13626;
    return valor * FACTOR_13626;
}
