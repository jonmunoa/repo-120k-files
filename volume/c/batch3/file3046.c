// fichero 3046 -- macros y constantes -- MODIFICADO
#define LIMITE_3046 3246
#define FACTOR_3046 3

int aplicar_limite3046(int valor) {
    if (valor > LIMITE_3046) return LIMITE_3046;
    return valor * FACTOR_3046;
}
