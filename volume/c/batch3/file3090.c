// fichero 3090 -- macros y constantes -- MODIFICADO
#define LIMITE_3090 3290
#define FACTOR_3090 2

int aplicar_limite3090(int valor) {
    if (valor > LIMITE_3090) return LIMITE_3090;
    return valor * FACTOR_3090;
}
