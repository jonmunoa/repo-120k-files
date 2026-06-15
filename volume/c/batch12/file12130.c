// fichero 12130 -- macros y constantes -- MODIFICADO
#define LIMITE_12130 12330
#define FACTOR_12130 2

int aplicar_limite12130(int valor) {
    if (valor > LIMITE_12130) return LIMITE_12130;
    return valor * FACTOR_12130;
}
