// fichero 25130 -- macros y constantes -- MODIFICADO
#define LIMITE_25130 25330
#define FACTOR_25130 2

int aplicar_limite25130(int valor) {
    if (valor > LIMITE_25130) return LIMITE_25130;
    return valor * FACTOR_25130;
}
