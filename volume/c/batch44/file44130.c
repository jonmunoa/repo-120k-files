// fichero 44130 -- macros y constantes -- MODIFICADO
#define LIMITE_44130 44330
#define FACTOR_44130 2

int aplicar_limite44130(int valor) {
    if (valor > LIMITE_44130) return LIMITE_44130;
    return valor * FACTOR_44130;
}
