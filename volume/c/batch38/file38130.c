// fichero 38130 -- macros y constantes -- MODIFICADO
#define LIMITE_38130 38330
#define FACTOR_38130 2

int aplicar_limite38130(int valor) {
    if (valor > LIMITE_38130) return LIMITE_38130;
    return valor * FACTOR_38130;
}
