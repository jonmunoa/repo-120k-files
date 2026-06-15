// fichero 41130 -- macros y constantes -- MODIFICADO
#define LIMITE_41130 41330
#define FACTOR_41130 2

int aplicar_limite41130(int valor) {
    if (valor > LIMITE_41130) return LIMITE_41130;
    return valor * FACTOR_41130;
}
